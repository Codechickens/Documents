#include <stdio.h>
#include <math.h>

double SIN(double x, double epsilon) {
    double sum = x;    // Số hạng đầu tiên (khi i=0) là x
    double term = x;   // Số hạng hiện tại
    int i = 1;

    do {
        // Công thức truy hồi để tránh tính pow và giai thừa
        term *= -x * x / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    } while (fabs(term) >= epsilon);

    return sum;
}

int main() {
    double x, epsilon;
    printf("Nhap x va epsilon: ");
    scanf("%lf %lf", &x, &epsilon);
    printf("SIN(%lf) = %lf\n", x, SIN(x, epsilon));
    printf("sin(%lf) = %lf\n", x, sin(x));
    return 0;
}