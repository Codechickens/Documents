#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Mangtangdan(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

int Manggiamdan(int arr[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

int Mangdacbiet(int a, int b, int c){
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    return max;
}

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
    /*
    int arr[10];
    int sum1=0, sum2=0;
    int count2=-1, count3=0, count4;
    int x;
    scanf("Nhap x: %d", &x);
    getchar();
    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i]>0){
            sum1+=arr[i];
        } else if (arr[i]<0){
            sum2+=arr[i];
            count2++;
        } else {
            count3++;
        }

        if (arr[i] == x){
            count4=i+1;
            break;
        }
    }
    printf("\n---------------------------------\n");
    printf("Tong cac so duong: %d\n", sum1);
    printf("Tong cac so am: %d\n", sum2/count2);
    printf("So cac so zero: %d\n", count3);
    printf("Vi tri x trong mang: %d\n", count4);
    */

    /*
    int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    Mangtangdan(arr, 10);
    Manggiamdan(arr, 10);
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    */

    int n;
    int arr[10];
    //scanf("Nhap n: %d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return 0;
}

