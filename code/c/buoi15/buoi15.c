#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ID 10
#define MAX_NAME_LEN 20

/* // 1. Khai báo kiểu dữ liệu cấu trúc Ngày
typedef struct {
    int day;
    int month;
    int year;
} Ngay;

// Hàm phụ trợ: Kiểm tra năm nhuận
int laNamNhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm phụ trợ: Lấy số ngày của tháng
int soNgayCuaThang(int month, int year) {
    if (month == 2) return laNamNhuan(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

// 2. Chương trình con nhập dữ liệu có kiểm tra hợp lệ
void nhapNgay(Ngay *d) {
    while (1) {
        printf("Nhap ngay / thang / nam: ");
        scanf("%d/%d/%d", &d->day, &d->month, &d->year);

        int maxDay = soNgayCuaThang(d->month, d->year);

        if (d->year > 0 && d->month > 0 && d->month < 13 &&
            d->day > 0 && d->day <= maxDay) {
            break; // Nhập đúng thì thoát vòng lặp
        }
        printf("-> Ngay khong hop le! Hay nhap lai.\n");
    }
}

// 3. Chương trình con so sánh 2 ngày
int soSanhNgay(Ngay d1, Ngay d2) {
    // So sánh năm trước
    if (d1.year != d2.year) {
        return d1.year < d2.year ? -1 : 1;
    }
    // Nếu năm bằng nhau, so sánh tháng
    if (d1.month != d2.month) {
        return d1.month < d2.month ? -1 : 1;
    }
    // Nếu tháng bằng nhau, so sánh ngày
    if (d1.day != d2.day) {
        return d1.day < d2.day ? -1 : 1;
    }
    return 0; // Trùng nhau
}

// 4. Chương trình chính kiểm nghiệm
int main() {
    Ngay date1, date2;

    printf("--- Nhap ngay thu nhat ---\n");
    nhapNgay(&date1);

    printf("\n--- Nhap ngay thu hai ---\n");
    nhapNgay(&date2);

    printf("\n--- Ket qua so sanh ---\n");
    int kq = soSanhNgay(date1, date2);

    if (kq == -1) {
        printf("Ngay 1 (%d/%d/%d) TRUOC ngay 2 (%d/%d/%d)\n",
               date1.day, date1.month, date1.year,
               date2.day, date2.month, date2.year);
    } else if (kq == 1) {
        printf("Ngay 1 (%d/%d/%d) SAU ngay 2 (%d/%d/%d)\n",
               date1.day, date1.month, date1.year,
               date2.day, date2.month, date2.year);
    } else {
        printf("Hai ngay TRUNG NHAU\n");
    }

    return 0;
}
*/

/*
typedef struct {
    int id;
    char name[MAX_NAME_LEN]; // Đổi thành mảng để dễ quản lý, không cần malloc thủ công
    double avg;
} DiemThi;

// Hàm nhập dữ liệu cho n học sinh
void NhapDuLieu(DiemThi *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("--- Nhap hoc sinh thu %d ---\n", i + 1);
        printf("Nhap MSSV: ");
        scanf("%d", &ds[i].id);
        getchar(); // Xóa bộ đệm

        printf("Nhap ho va ten: ");
        fgets(ds[i].name, MAX_NAME_LEN, stdin);
        ds[i].name[strcspn(ds[i].name, "\n")] = '\0'; // Xóa ký tự xuống dòng

        printf("Nhap diem trung binh: ");
        scanf("%lf", &ds[i].avg);
        printf("\n");
    }
}

// Hàm sắp xếp: Giảm dần theo điểm. Nếu bằng điểm thì tăng dần theo tên (ABC)
void Xapxep(DiemThi *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int canSwap = 0;

            if (arr[i].avg < arr[j].avg) {
                canSwap = 1; // Điểm nhỏ hơn thì đẩy xuống
            } else if (arr[i].avg == arr[j].avg && strcmp(arr[i].name, arr[j].name) > 0) {
                canSwap = 1; // Điểm bằng nhau thì sắp xếp tên theo ABC
            }

            if (canSwap) {
                DiemThi temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void hienThiDanhSach(DiemThi *ds, int n) {
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("%-5s | %-10s | %-20s | %-10s\n", "STT", "Ma HS", "Ten hoc sinh", "Diem TB");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        // ds[i].name thay cho ds[i].arr vì đã đổi tên trường trong struct cho dễ hiểu
        printf("%-5d | %-10d | %-20s | %-10.2f\n", i + 1, ds[i].id, ds[i].name, ds[i].avg);
    }
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

int main() {
    DiemThi arr[MAX_ID];
    int n;

    printf("Nhap so luong hoc sinh (toi da %d): ", MAX_ID);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ID) {
        printf("So luong hoc sinh khong hop le!\n");
        return 1;
    }

    NhapDuLieu(arr, n);

    printf("\n--- Ket qua sau khi sap xep ---\n");
    Xapxep(arr, n);
    hienThiDanhSach(arr, n);

    return 0;
}
*/
