#include <stdio.h>
#include <math.h>

void TTD(float k) {
    if (1<=k && k<=50){
        printf("So tien phai tra la: %.2f VND\n", k*1000);
    } else if (k>50 && k<=100){
        printf("So tien phai tra la: %.2f VND\n", 50*1000 + (k-50)*1200);
    } else if (k>100 && k<=200){
        printf("So tien phai tra la: %.2f VND\n", 50*1000 + 50*1200 + (k-100)*1500);
    } else if (k>200){
        printf("So tien phai tra la: %.2f VND\n", 50*1000 + 50*1200 + 100*1500 + (k-200)*2000);
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

/*
    float k;
    printf("Nhap vao so dien: ");
    scanf("%f", &k);
    printf("So dien tieu thu trong thang nay: %.2f kWh\n", k);
    TTD(k);

*/

    float a,b,c,x1,x2;
    printf("Nhap vao (a,b,c): ");
    scanf("%f% %f% %f", &a, &b, &c);
    float delta = b*b - 4*a*c;
    if (delta < 0){
        printf("Phuong trinh vo nghiem!\n");
    } else if (delta == 0){
        x1 = x2 = -b/(2*a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

}