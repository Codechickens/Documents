#include <stdio.h>
#include <string.h>
#include <ctype.h>

// --- Câu 1a: Hàm nhập chuỗi thỏa mãn các điều kiện ---
void nhapChuoi(char s[]) {
    int hopLe;
    do {
        hopLe = 1; // Giả sử ban đầu chuỗi hợp lệ
        printf("Nhap vao string: ");
        fgets(s, 100, stdin);
        
        // Xóa ký tự xuống dòng '\n' do fgets nhận vào (nếu có)
        s[strcspn(s, "\n")] = '\0';
        
        int len = strlen(s);
        
        // Điều kiện 1: Có ít nhất 6 ký tự
        if (len < 6) {
            hopLe = 0;
        }
        
        // Điều kiện 3: Ký tự bắt đầu phải là 'P' hoặc 'p'
        if (s[0] != 'P' && s[0] != 'p') {
            hopLe = 0;
        }
        
        // Điều kiện 2: Có ít nhất 1 ký tự chữ hoa, 1 ký tự số
        int coChuHoa = 0;
        int coChuSo = 0;
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) coChuHoa = 1;
            if (isdigit(s[i])) coChuSo = 1;
        }
        
        if (!coChuHoa || !coChuSo) {
            hopLe = 0;
        }
        
        // Điều kiện 4: Nếu không thỏa mãn, thông báo nhập lại
        if (!hopLe) {
            printf("Chuoi khong thoa man dieu kien. Vui long nhap lai!\n");
        }
        
    } while (!hopLe);
}

// --- Câu 1b: Hàm thống kê chữ cái và chữ số ---
void thongKe(char s[], int *demChuCai, int *demChuSo) {
    *demChuCai = 0;
    *demChuSo = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            (*demChuCai)++;
        } else if (isdigit(s[i])) {
            (*demChuSo)++;
        }
    }
}

// --- Câu 1c: Hàm xóa các ký tự đặc biệt ---
void xoaKyTuDacBiet(char s[]) {
    int len = strlen(s);
    int j = 0;
    for (int i = 0; i < len; i++) {
        // Nếu là chữ cái hoặc chữ số thì giữ lại
        if (isalnum(s[i])) {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0'; // Kết thúc chuỗi mới sau khi lọc
}

// --- Câu 1d: Chương trình chính ---
int main() {
    char s[100];
    int chuCai = 0, chuSo = 0;
    
    // Gọi hàm câu a
    nhapChuoi(s);
    
    // Gọi hàm câu b và in kết quả thống kê
    thongKe(s, &chuCai, &chuSo);
    printf("string co %d chu cai, %d so\n", chuCai, chuSo);
    
    // Gọi hàm câu c và in chuỗi kết quả
    xoaKyTuDacBiet(s);
    printf("string ket qua sau khi xoa ky tu dac biet: %s\n", s);
    
    return 0;
}