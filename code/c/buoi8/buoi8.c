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

/*    // BT 7.2 Tính lãi suất theo công thức lãi kép
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
*/

/*    // BT 7.3 Vẽ hình tam giác bằng dấu *
    int n;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1; j<=i; j++){
        printf("%c ", '*');
        }
        printf("\n");
    }
*/

/*
    // BT 7.4 Vẽ hình tam giác ngược bằng dấu *
    int n;
    printf("Nhap chieu cao cua tam giac nguoc: ");
    scanf("%d", &n);
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
        printf("%c ", '*');
        }
        printf("\n");
    }
*/

/*
    // BT 7.4b Vẽ hình tam giác cân bằng dấu *
    for (int i = 1; i <= n; i++) {
    // 1. In khoảng trắng để căn lề
    for (int j = 1; j <= n - i; j++) {
        printf(" ");
    }

    // 2. In dấu sao (số lượng sao = 2*i - 1)
    for (int k = 1; k <= (2 * i - 1); k++) {
        printf("*");
    }

    // 3. Xuống dòng
    printf("\n");
}
*/

/*
    // BT 5 Liệt kê bảng chữ cái in hoa
    for (char c = 'A'; c <= 'Z'; c++){
        printf("%c ", c);
    }
*/

/*    
    // BT 6: Tính giai thừa của một số nguyên dương
    int n;
    int giai_thua = 1;
    printf("Nhap so can tinh giai thua: ");
    scanf("%d", &n);
    if (n < 0){
        printf("Giai thua chi tinh cho so nguyen duong!");
        return 1;
    }else if (n == 0){
        printf("0! = 1\n");
        return 0;
    } else { 
    for (int i=1; i<=n; i++){
        giai_thua *= i;
    }
    printf("%d! = %d\n", n, giai_thua);
    }
*/

/*
    // BT 7 Tính tổng các số từ 1 đến n
    int n;
    int sum=0;
    printf("Nhap so can tinh: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        sum += i;
    }
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
*/

    int n;
    int x;
    int sum=0;
    printf("Nhap so can tinh: ");
    scanf("%d", &n);

    printf("Nhap lua chon (1: tinh tong so le, 2: tinh tong so chan): ");
    scanf("%d", &x);
    switch (x){
    case 2:
        for (int i=1; i<=n; i++){
            if (i%2 == 0){
                sum += i;
            }
        }
        printf("Tong cac so chan tu 1 den %d la: %d\n", n, sum);
        break;
    case 1:
        for (int i=1; i<=n; i++){
            if (i%2 != 0){
                sum += i;
            }
        }
        printf("Tong cac so le tu 1 den %d la: %d\n", n, sum);
        break;
    default:
        printf("Lua chon khong hop le!\n");
        break;
    }
    return 0;
}