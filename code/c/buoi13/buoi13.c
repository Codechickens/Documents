#include <stdio.h>
#include <stdlib.h>


int countEven(int *Num, int size) {
    int countEven = 0;
    for (int i = 0; i < size; i++, Num++) {
        if (*Num % 2 == 0) {
            countEven++;
        }
    }
    return countEven;
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
    int So_chan = countEven(a, n);
    printf("So phan tu chan co trong mang la: %d\n", So_chan);

    
    free(a);

    
    return 0;
}
