#include <stdio.h>
#include <string.h>

int main() {
    char ten1[50], ten2[50];
    char que1[50], que2[50];
    int tuoi1, tuoi2;

    // --- NHẬP SINH VIÊN 1 ---
    printf("Nhap thong tin sinh vien 1:\n");
    printf("-Ten: ");
    fgets(ten1, sizeof(ten1), stdin);
    ten1[strcspn(ten1, "\n")] = 0;

    printf("-Que quan: ");
    fgets(que1, sizeof(que1), stdin);
    que1[strcspn(que1, "\n")] = 0;

    printf("-Tuoi: ");
    scanf("%d", &tuoi1);
    while(getchar() != '\n'); // Xóa bộ đệm ĐÚNG CHỖ để không bị nhảy tên SV2

    // --- NHẬP SINH VIÊN 2 ---
    printf("Nhap thong tin sinh vien 2:\n");
    printf("-Ten: ");
    fgets(ten2, sizeof(ten2), stdin);
    ten2[strcspn(ten2, "\n")] = 0;

    printf("-Que quan: ");
    fgets(que2, sizeof(que2), stdin);
    que2[strcspn(que2, "\n")] = 0;

    printf("-Tuoi: ");
    scanf("%d", &tuoi2);

    // --- IN KẾT QUẢ THEO MẪU TRONG ẢNH ---
    printf("Cac sinh vien da nhap vao:\n");
    printf("*----------------------*------------*------*\n");
    printf("|         Ten          |  Que quan  | Tuoi |\n");
    printf("*----------------------*------------*------*\n");
    
    // In SV 1
    printf("| %-20s | %-10s | %-4d |\n", ten1, que1, tuoi1);
    printf(" ------------------------------------------\n");
    
    // In SV 2
    printf("| %-20s | %-10s | %-4d |\n", ten2, que2, tuoi2);
    printf("*----------------------*------------*------*\n");

    return 0;
}