#include <stdio.h>

int main() {
  /* // Khai bao bien
   int a;
   float x;
   char ch;
   char str[100];

   // Nhap du lieu
   printf("Nhap vao mot so nguyen: ");
   scanf("%d", &a);

   printf("Nhap vao mot so thuc: ");
   scanf("%f", &x);

   printf("Nhap vao mot ki tu: ");
   // Xoa bo dem tren Linux: doc cac ki tu con lai cho den khi gap xuong dong
   while (getchar() != '\n');
   scanf("%c", &ch);

   printf("Nhap vao mot xau ki tu: ");
   while (getchar() != '\n');
   // Dung fgets de nhap chuoi co dau cach an toan hon
   scanf("%s", str);

   // Hien thi du lieu
   printf("\n--- Nhung du lieu vua nhap vao ---");
   printf("\nSo nguyen: %d", a);
   printf("\nSo thuc: %.2f", x);
   printf("\nKi tu: %c", ch);
   printf("\nXau ki tu: %s\n", str);

   return 0; */

  /*
  int a;
  int b;
  int c = a + b;
  scanf("%d", &a);
  scanf("%d", &b);
  printf("Tong cua %d va %d la %d\n", a, b, a + b); */

 // Khai bao bien
  //
  //
  char str[1000];

  fgets(str, sizeof(str), stdin);
  // while (getchar() != '\n')
  //;

  // Hien thi du lieu vua nhap vao
  //
  printf("Xau vua nhap vao: %s\n", str);



  return 0;
}
