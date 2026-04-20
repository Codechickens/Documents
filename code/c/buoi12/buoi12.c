#include <stdio.h>
#include <string.h>

int main(){
    // 10.1
    /*
    // Chương trình nhập vào lương mua của 12 tháng và in ra dưới dạng bảng
    float luongMua[12];
    printf("Nhap luong mua cua 12 thang:\n");
    for (int i = 0; i < 12; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%f", &luongMua[i]);
    }
    printf("\n-----Bang quan ly luong mua-----\n");
    printf(" | %-7s | %-15s |\n", "Thang", "Luong mua");
    printf("------------------------------------\n");
    for (int i = 0; i < 12; i++) {
        printf(" | %-7d | %-15.2f|\n", i + 1, luongMua[i]);
    }
    printf("------------------------------------\n");
    */

    // 10.2
    
    int arr[10];
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i]>0){
            sum1+=arr[i];
        } else if (arr[i]<0){
            sum2+=arr[i];
        } else {
            sum3++;
        }
    }
    printf("Tong cac so duong: %d\n", sum1);
    printf("Tong cac so am: %d\n", sum2);
    printf("So cac so zero: %d\n", sum3);
    


    return 0;

}