#include <stdio.h>
void main() {
  /*printf("%d\n", 455);
  printf("%i\n", 455);
  printf("%d\n", +455);
  printf("%d\n", -455);
  printf("%hd\n", 32000);
  printf("%ld\n", 2000000000);
  printf("%o\n", 455);
  printf("%u\n", 455);
  printf("%u\n", -455);
  printf("%x\n", 455);
  printf("%X\n", 455);*/

  /*printf("%e\n", 1234567.89);
  printfintf("%e\n", +1234567.89);
  printf("%e\n", -1234567.89);
  printf("%E\n", 1234567.89);
  printf("%f\n", 1234567.89);
  printf("%g\n", 1234567.89);
  printf("%G\n", 1234567.89);*/

  /*char character = 'a';
  characterar str[] = "tao co khien";
  const char *strPtr = "tao cung co khien";

  printf("%c\n", character);
  printf("%s\n", "O tao cung co khien nay");
  printf("%s\n", str);
  printf("%s\n", strPtr);*/

  /*int *ptr;
  int x = 12345, y;
  ptr = &x;
  printf("The value of ptr is %p\n", ptr);
  printf("%p\n\n", &x);

  printf("Total character printed on this line is:%n", &y);
  printf("%d\n\n", y);

  y = printf("Thí line has 28 characters\n");
  printf("%d character were printed\n\n", y);

  printf("Printing a %% in a format control string\n");*/

  /*  printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(long int));
    printf("%d\n", sizeof(unsigned int));*/

  /*printf("%d %d %d %d\n", 'B', 'I', 'D', 'V');
  printf("%c %c %c %c\n", 'B', 'I', 'D', 'V');*/

  // Khai bao bien
  int a;
  float x;
  char ch;
  char *str;

  // Nhap du lieu
  printf("Nhap vao mot so nguyen: ");
  scanf("%d", &a);
  printf("\n Nhap vao mot so thuc: ");
  scanf("%f", &x);
  printf("\n Nhap vao mot ki tu: ");
  fflush(stdin);
  scanf("%c", &ch);
  printf("\n Nhap vao mot chuoi ki tu: ");
  fflush(stdin);
  scanf("%s", str);

  // Hien thi du lieu
  printf("\n Nhung du lieu vua nhap vao");
  printf("\n So nguyen: %i", a);
  printf("\n So thuc: %.4f", x);
  printf("\n Ki tu: %c", ch);
  printf("\n Chuoi ki tu: %s", str);
}
