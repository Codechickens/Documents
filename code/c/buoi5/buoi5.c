#include <stdio.h>
#include <string.h>

int main(){
    /*
  int a;
  printf("Nhap so: ");
  scanf("%d", &a);
  printf("- So vua nhap vao: %d\n", a);
  printf("- Tuong ung: \\ %d%% \\\"%d%%\"\\\'%d%%\'\\",a,a,a);
*/

/*  int month1, day1, year1, month2, day2, year2;
  printf("Nhap vao ngay thang nam theo format dd-mm-yyyy: ");
  scanf("%d%*c%d%*c%d", &day1, &month1, &year1);
  printf("Ngay = %02d Thang = %02d Nam = %04d", day1, month1, year1);
*/

/*  int r;
  #define PI 3.14
  printf("Nhap vao ban kinh hinh tron: ");
  scanf("%d", &r);
  printf("Dien tich hinh tron la: %.2f\n", PI * r * r);
  printf("Chu vi hinh tron la: %.2f\n", 2 * PI * r);
*/
/*
  // Khai báo các biến
    char title[100], isbn[20];
    float price, total, vat, finalPay;
    int qty;

    // --- NHẬP DỮ LIỆU ---
    printf("BK Bookseller - Nhap thong tin don hang\n");
    
    printf("Nhap ma sach (ISBN): ");
    fgets(isbn, sizeof(isbn), stdin);
    isbn[strcspn(isbn, "\n")] = 0;

    printf("Nhap ten sach (Title): ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0;

    printf("Nhap gia sach (Price): ");
    scanf("%f", &price);

    printf("Nhap so luong (Qty): ");
    scanf("%d", &qty);

    // --- TÍNH TOÁN ---
    total = price * qty;
    vat = total * 0.05; // VAT cố định 5%
    finalPay = total + vat;

    // --- HIỂN THỊ BẢNG THANH TOÁN ---
    printf("\n\nBK Bookseller\n\n");
    
    // Tiêu đề bảng
    printf("%-5s %-12s %-25s %-10s %-10s\n", "Qty", "ISBN", "Title", "Price", "Total");
    
    // In thanh ngang dài (Sử dụng vòng lặp cho chuyên nghiệp)
    for(int i = 0; i < 65; i++) printf("_");
    printf("\n\n");

    // In dữ liệu sách
    printf("%-5d %-12s %-25s %-10.2f %-10.2f\n\n", qty, isbn, title, price, total);

    // In phần tổng kết
    printf("VAT: %36.2f$\n", vat);
    printf("You pay: %32.2f$\n", finalPay);
*/

  
    return 0;
}

