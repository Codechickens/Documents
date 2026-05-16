#!/bin/bash

# ==============================================================================
# SCRIPT TỰ ĐỘNG CÀI ĐẶT UBUNTU MINIMAL DESKTOP TRÊN UBUNTU SERVER CORE (V1-FINAL)
# Cấu hình: Tẩy sạch Snapd, Giao diện tối giản, Máy in, Sửa mạng, Font nét, Brave.
# ==============================================================================

GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0;m'

echo -e "${BLUE}=== Bắt đầu cấu hình tinh giản: Sạch Snapd + Giao diện + Máy in ===${NC}"

if [ "$EUID" -ne 0 ]; then
  echo -e "${RED}Vui lòng chạy script này với quyền sudo (sudo bash script.sh)${NC}"
  exit 1
fi

# 1. THANH TRỪNG TRIỆT ĐỂ SNAPD (Chạy ngay từ đầu để giải phóng RAM)
echo -e "${RED}\n[1/9] Đang xóa bỏ hoàn toàn tất cả tiến trình và dịch vụ Snapd...${NC}"
# Gỡ tận gốc các package snap mặc định của bản Server
snap remove --purge lxd 2>/dev/null
snap remove --purge core22 2>/dev/null
snap remove --purge snapd 2>/dev/null

# Purge gói gdm/systemd snapd core
apt purge snapd -y

# Đóng đinh ngăn không cho apt tự động cài lại snapd sau này làm rác máy
apt-mark hold snapd

# Dọn sạch các thư mục rác, mount point sót lại của snap
rm -rf ~/snap
rm -rf /var/snap /var/lib/snapd /var/cache/snapd /usr/lib/snapd /root/snap

# 2. Cập nhật hệ thống core còn lại
echo -e "${GREEN}\n[2/9] Đang cập nhật danh sách gói hệ thống...${NC}"
apt update && apt upgrade -y

# 3. Cài đặt giao diện đồ họa tối giản (Minimal Desktop Shell)
echo -e "${GREEN}\n[3/9] Cài đặt môi trường đồ họa GNOME tối giản (Không bloatware)...${NC}"
apt install --no-install-recommends ubuntu-desktop-minimal gdm3 wayland-protocols -y
apt install nautilus gnome-terminal gnome-tweaks build-essential curl git -y

# 4. Cài đặt driver điều khiển phần cứng cho Laptop & Audio
echo -e "${GREEN}\n[4/9] Cài đặt các ứng dụng hệ thống quản lý Phần cứng, Pin và Âm thanh...${NC}"
apt install network-manager-gnome pipewire wireplumber blueman power-profiles-daemon -y

# 5. Cài đặt hệ thống và driver dịch vụ máy in
echo -e "${GREEN}\n[5/9] Cài đặt hệ thống máy in (CUPS & System-Config-Printer)...${NC}"
apt install cups cups-client cups-bsd cups-filters system-config-printer gnome-control-center-printer-driver ghostscript -y
systemctl enable --now cups

# 6. Cấu hình Mạng (Netplan) & Vô hiệu hóa dịch vụ chờ gây treo boot
echo -e "${GREEN}\n[6/9] Đang thiết lập cấu hình mạng NetworkManager và sửa lỗi treo Boot...${NC}"
NETPLAN_FILE=$(ls /etc/netplan/*.yaml | head -n 1)
if [ -f "$NETPLAN_FILE" ]; then
    echo -e "${YELLOW}Cập nhật tệp Netplan: $NETPLAN_FILE${NC}"
    cp "$NETPLAN_FILE" "${NETPLAN_FILE}.bak"
    cat <<EOF > "$NETPLAN_FILE"
network:
  version: 2
  renderer: NetworkManager
EOF
    netplan apply
fi

systemctl disable systemd-networkd-wait-online.service
systemctl mask systemd-networkd-wait-online.service
systemctl stop systemd-networkd systemd-resolved
systemctl disable systemd-networkd systemd-resolved
systemctl enable NetworkManager

# 7. Tối ưu hóa Font chữ hệ thống hiển thị sắc nét (Anti-Aliasing)
echo -e "${GREEN}\n[7/9] Cài đặt font chữ hiện đại và cấu hình làm mịn chữ...${NC}"
apt install fonts-ubuntu fonts-dejavu fonts-liberation fonts-jetbrains-mono -y
gsettings set org.gnome.desktop.interface font-antialiasing 'rgba'
gsettings set org.gnome.desktop.interface font-hinting 'slight'

# 8. Khôi phục thanh tác vụ Ubuntu Dock & Logo Ubuntu chuẩn
echo -e "${GREEN}\n[8/9] Khôi phục thanh tác vụ Ubuntu Dock (Taskbar bên trái) và logo...${NC}"
apt install gnome-shell-extension-ubuntu-dock ubuntu-settings ubuntu-logos yaru-theme-icon yaru-theme-gtk -y
gsettings set org.gnome.shell.extensions.dash-to-dock show-apps-at-top false
gsettings set org.gnome.shell.extensions.dash-to-dock custom-theme-shrink false

# 9. Cài đặt kho Flatpak và trình duyệt Brave
echo -e "${GREEN}\n[9/9] Cài đặt Flatpak, tích hợp Flathub và nạp trình duyệt Brave...${NC}"
apt install gnome-software gnome-software-plugin-flatpak flatpak -y
flatpak remote-add --if-not-exists flathub https://dl.flathub.org/repo/flathub.flatpakrepo
flatpak update --appstream
appstreamcli refresh-cache --force

# Tiến hành kéo Brave về máy từ Flathub
flatpak install flathub com.brave.Browser -y

# Đảm bảo boot thẳng vào màn hình Desktop đăng nhập đồ họa
systemctl set-default graphical.target
systemctl enable gdm3

echo -e "${BLUE}==============================================================================${NC}"
echo -e "${GREEN} HOÀN THÀNH MỸ MÃN: SẠCH SNAPD - CÓ MÁY IN - ĐÃ CÀI BRAVE TỪ FLATPAK!${NC}"
echo -e "${BLUE}==============================================================================${NC}"

