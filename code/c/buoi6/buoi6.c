#include <stdio.h>

void TTD(float k) {
    if (1<=k && k<=50){
        printf("So tien phai tra la: %.2f\n", k*1000);
    } else if (k>50 && k<=100){
        printf("So tien phai tra la: %.2f\n", 50*1000 + (k-50)*1200);
    } else if (k>100 && k<=200){
        printf("So tien phai tra la: %.2f\n", 50*1000 + 50*1200 + (k-100)*1500);
    } else if (k>200){
        printf("So tien phai tra la: %.2f\n", 50*1000 + 50*1200 + 100*1500 + (k-200)*2000);
    } else {
        printf("So dien khong hop le!\n");
    }
}
int main(){
    // B5: Các phép toàn trong C
/*
    int x,y;
    printf("Nhap vao (x,y): ");
    scanf("%d%*c%d", &x, &y);
    printf("Phan thuc la: %d\n", x);
    printf("Phan ao la: %d\n", y);

*/

/*
    float a,b,c;
    printf("Nhap vao (a,b,c): ");
    scanf("%f%*c%f%*c%f", &a, &b, &c);
    printf("Gia tri lon nhat la: %f\n", (a > b && a > c) ? a : (b > c ? b : c));
*/
    float k;
    printf("Nhap vao so dien: ");
    scanf("%f", &k);
    printf("So dien vua nhap vao: %.2f\n", k);
    TTD(k);
}