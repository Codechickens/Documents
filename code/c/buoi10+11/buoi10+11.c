#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

// --- KHAI BÁO CÁC HÀM CON (PROTOTYPES) ---
void menuChinh();
void phepToanCoBan();
void hangSoVaLuongGiac();
void thucHienPhepChia();

// --- HÀM MAIN ---
int main() {
    int luaChonChinh;
    char tiepTuc;

    do {
        printf("\n========== HE THONG TINH TOAN ==========\n");
        printf("1. Cac phep tinh so hoc (+, -, *, /)\n");
        printf("2. Hang so va Luong giac (pi, e, sin)\n");
        printf("An phim khac de thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChonChinh);

        if (luaChonChinh == 1) {
            phepToanCoBan();
        } else if (luaChonChinh == 2) {
            hangSoVaLuongGiac();
        } else {
            printf("Dang thoat chuong trinh...\n");
            break;
        }

        printf("\nBan co muon quay lai Menu Chinh? (y/n): ");
        scanf(" %c", &tiepTuc);

    } while (tiepTuc == 'y' || tiepTuc == 'Y');

    return 0;
}

// --- ĐỊNH NGHĨA CÁC HÀM CON ---

// Ham xu ly Bai 9
void phepToanCoBan() {
    int lc;
    float a, b;
    printf("\n--- PHEP TOAN CO BAN ---\n");
    printf("1- Phep cong\n2- Phep tru\n3- Phep nhan\n4- Phep chia\n");
    printf("Lua chon: ");
    scanf("%d", &lc);

    if (lc < 1 || lc > 4) return;

    printf("Nhap so thu 1: "); scanf("%f", &a);
    printf("Nhap so thu 2: "); scanf("%f", &b);

    switch (lc) {
        case 1: printf("Tong: %.2f\n", a + b); break;
        case 2: printf("Hieu: %.2f\n", a - b); break;
        case 3: printf("Tich: %.2f\n", a * b); break;
        case 4: 
            if (b == 0) printf("Loi: Mau so bang 0!\n");
            else printf("Thuong: %.2f\n", a / b);
            break;
    }
}

// Ham xu ly Bai 10
void hangSoVaLuongGiac() {
    int lc;
    printf("\n--- HANG SO & LUONG GIAC ---\n");
    printf("1- So pi\n2- So e\n3- sin(x)\n");
    printf("Lua chon: ");
    scanf("%d", &lc);

    switch (lc) {
        case 1: printf("So pi = %.4f\n", M_PI); break;
        case 2: printf("So e = %.4f\n", M_E); break;
        case 3: {
            double x;
            printf("Nhap x (rad): ");
            scanf("%lf", &x);
            printf("sin(%.2f) = %.4f\n", x, sin(x));
            break;
        }
        default: printf("Lua chon khong hop le.\n");
    }
}