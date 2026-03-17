#include <stdio.h>
#include <string.h>

int main(){
    // Khai báo các biến cần thiết
    double a, r;
    int d,m,y,x,z,s;
    float PI =  3.14;


    printf("Bai 1\n");
    // Bai 1: Nhập vào một số a bất kì, tính a^2, a^3, a^4
    printf("Nhap vao mot so thuc: "); 
    scanf("%lf", &a);
    printf("So thuc vua nhap la: %lf", a);
    printf("\na^2 = %lf", a*a);
    printf("\na^3 = %lf", a*a*a);
    printf("\na^4 = %lf", a*a*a*a);
    printf("\n\n");

    printf("Bai 2\n");
    /* Bai 2: Nhập vào ngày tháng năm, in ra 
    ngày tháng năm vừa nhập theo định dạng dd/mm/yyyy */
    printf("Nhap vao ngay: ");
    scanf("%d", &d);
    printf("Nhap vao thang: ");
    scanf("%d", &m);
    printf("Nhap vao nam: ");
    scanf("%d", &y);
    printf("Ngay vua nhap la: %02d/%02d/%04d", d, m, y);
    printf("\n\n");

    printf("Bai 3\n");
    /* Bài 3: Nhập 2 số nguyên từ bàn phím
    in ra kết quả của các phép tính cộng, trừ, nhân, chia */
    printf("Nhap vao hai so nguyen: ");
    scanf("%d %d", &x, &z);
    printf("a + b: %d\n", x + z);
    printf("a - b: %d\n", x - z);
    printf("a * b: %d\n", x * z);
    printf("a / b: %d\n", x / z);
    printf("\n\n");

    printf("Bai 4\n");
    /* Bài 4: Nhập vào bán kính hình cầu, 
    tính và in ra thể tích và diện tích */
    printf("Nhap vao ban kinh hinh cau: ");
    scanf("%lf", &r);
    printf("The tich hinh cau la: %lf\n", (4.0/3.0) * PI * r * r * r);
    printf("Dien tich hinh cau la: %lf\n", 4 * PI * r * r);
    printf("\n\n");

    printf("Bai 5\n");
    /* Bài 5: Nhập vào số giây
    tính và in ra giờ:phút:giây */
    int hours = s / 3600;
    int minutes = (s % 3600) / 60;
    s = s % 60;
    printf("Nhap vao so giay: ");
    scanf("%d", &s);
    getchar(); // Xóa bộ đệm sau khi nhập số giây
    int hour = s / 3600;
    int minute = (s % 3600) / 60;
    s = s % 60;
    printf("Thoi gian la: %02d:%02d:%02d\n", hour, minute, s);
    printf("\n\n");

    printf("Bai 6\n");
    
    char ten1[50], ten2[50];
    char que1[50], que2[50];
    int tuoi1, tuoi2;

    // --- NHẬP SINH VIÊN 1 ---
    printf("Nhap thong tin sinh vien 1:\n");
    printf("-Ten: ");
    fgets(ten1, sizeof(ten1), stdin);
    ten1[strcspn(ten1, "\n")] = 0;

    printf("-Que quan: ");
    fgets(que1, sizeof(que1), stdin);
    que1[strcspn(que1, "\n")] = 0;

    printf("-Tuoi: ");
    scanf("%d", &tuoi1);
    while(getchar() != '\n'); // Xóa bộ đệm ĐÚNG CHỖ để không bị nhảy tên SV2

    // --- NHẬP SINH VIÊN 2 ---
    printf("Nhap thong tin sinh vien 2:\n");
    printf("-Ten: ");
    fgets(ten2, sizeof(ten2), stdin);
    ten2[strcspn(ten2, "\n")] = 0;

    printf("-Que quan: ");
    fgets(que2, sizeof(que2), stdin);
    que2[strcspn(que2, "\n")] = 0;

    printf("-Tuoi: ");
    scanf("%d", &tuoi2);

    // --- IN KẾT QUẢ THEO MẪU TRONG ẢNH ---
    printf("Cac sinh vien da nhap vao:\n");
    printf("*----------------------*------------*------*\n");
    printf("|         Ten          |  Que quan  | Tuoi |\n");
    printf("*----------------------*------------*------*\n");
    
    // In SV 1
    printf("| %-20s | %-10s | %-4d |\n", ten1, que1, tuoi1);
    printf(" ------------------------------------------\n");
    
    // In SV 2
    printf("| %-20s | %-10s | %-4d |\n", ten2, que2, tuoi2);
    printf("*----------------------*------------*------*\n");
}