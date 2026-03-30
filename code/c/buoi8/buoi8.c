#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // BT 7.1 Liệt kê các số nhỏ hơn 1000 có các đặc tính:
    // - Tổng chữ số hàng đơn vị và hàng trăm bằng chữ số hàng chục
    // - Là bội của 3
    // - Cứ cách 10 số thì xuống dòng
/*    int count = 0;
    for (int i=0; i<=1000; i++){
        int b = (i/10)%10;
        int c = i%10;
        int a = i/100;
        if ((c + a == b) && (i%3 == 0)){
            printf("%d\t", i);
            count++;


            if (count % 10 == 0){
                printf("\n");
            }
        }
    }
    printf("\nSo luong so thoa man dieu kien: %d", count);
*/

    double von_goc, lai_suat, tong_tien, tien_lai;
    int thang;
    char ten[50];

    // 1. Nhập dữ liệu từ bàn phím
    printf("Nhap so von goc ban dau (VND): ");
    scanf("%lf", &von_goc);
    
    while (getchar() != '\n')
    ;
    // Nhập tên người gửi
    printf("Nhap ten nguoi gui: ");
    fgets(ten, sizeof(ten), stdin); // Đọc tên người gửi (có thể chứa khoảng trắng)

    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    // Gán lãi suất cố định 1.2% (0.012)
    lai_suat = 0.012;

    // 2. Tính toán theo công thức lãi kép
    // tong_tien = von_goc * (1 + lai_suat)^thang
    tong_tien = von_goc * pow((1 + lai_suat), thang);
    tien_lai = tong_tien - von_goc;

    // 3. Xuất kết quả
    printf("\n\n--- KET QUA TINH LAI SUAT (1.2%%/thang) ---\n\n");
    printf("Ten nguoi gui: %s", ten);
    printf("Von goc ban dau: %.2f VND\n", von_goc);
    printf("Thoi gian gui: %d thang\n", thang);
    printf("Tien lai nhan duoc: %.2f VND\n", tien_lai);
    printf("Tong so tien cuoi ky: %.2f VND\n\n", tong_tien);
    return 0;
}