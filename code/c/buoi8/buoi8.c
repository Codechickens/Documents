#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // BT 7.1 Liệt kê các số nhỏ hơn 1000 có các đặc tính:
    // - Tổng chữ số hàng đơn vị và hàng trăm bằng chữ số hàng chục
    // - Là bội của 3
    // - Cứ cách 10 số thì xuống dòng
    int count = 0;
    for (int i=1; i<=1000; i++){
        int hang_chuc = (i/10)%10;
        int hang_don_vi = i%10;
        int hang_tram = i/100;
        if ((hang_don_vi + hang_tram == hang_chuc) && (i%3 == 0)){
            printf("%d\t ", i);
            count++;
            if (count % 10 == 0){
                printf("\n");
            }
        }
    }
    printf("\nSo luong so thoa man dieu kien: %d", count);
    return 0;
}