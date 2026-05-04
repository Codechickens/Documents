#include <stdio.h>
#include <stdlib.h>

int addNum(int *Num, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++, Num++) {
        sum += *Num;
    }
    return sum;
}

int countEven(int *Num, int size) {
    int countEven = 0;
    for (int i = 0; i < size; i++, Num++) {
        if (*Num % 2 == 0) {
            countEven++;
        }
    }
    return countEven;
}

int Maximum(int *a, int size){
    int max = *a;
    for (int i = 1; i < size; i++) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    return max;
}


int main(){
    int *a,n;

    printf("Nhap so phan tu co trong mang: ");
    scanf("%d", &n);

    a = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");

    int Tong = addNum(a, n);
    printf("Tong cac phan tu co trong mang la: %d\n", Tong);

    printf("\n");

    int So_chan = countEven(a, n);
    printf("So phan tu chan co trong mang la: %d\n", So_chan);

    printf("\n");

    int max = Maximum(a, n);
    printf("Phan tu lon nhat trong mang la: %d\n", max);


    free(a);


    return 0;
}
