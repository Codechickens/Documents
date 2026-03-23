#include <stdio.h>
#include <math.h>
int main(){
/*	// VD6.3
	int a=10;
	//scanf("%d",&a);
	if (a<10){
		printf("so vua nhap nho hon 10\n");
	} else if (a==10){
		printf("so vua nhap bang 10\n");
	} else if (a>10 && a<20){
		printf("so vua nhap lon hon 10 va nho hon 20\n");
	} else if (a==20){
		printf("so vua nhap bang 20\n");
	} else if (a>20){
		printf("so vua nhap lon hon 20\n");
	}
*/

/*	// VD 6.4
	int a, b;
	char c;
	scanf("%d %c %d",&a, &c, &b);
	switch (c){
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b );
			break;
		case '*':
			printf("%d\n",a*b );
			break;
		case '/':
			printf("%d\n",a/b );
			break;
		default:
			break;
	}
*/

/*	// BT 1
	int n;
	scanf("%d", &n);
	if (n%2==0){
		printf("So vua nhap la so chan\n");
	} else {
		printf("So vua nhap la so le\n");
	}

*/

/*	// BT 2
	int a,b;
	scanf("%d %d",&a,&b);
	int m=a;
	if (m>b){
		printf("%d\n",m);
	} else {
		printf("%d\n",b);
	}
*/

/*	// BT 3
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n",(a<b) ? ((a<c) ? a : c) : b);
*/

/*	//BT 4
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	if ((a>0 && b>0 && c>0) && (a+b>c && a+c>b && b+c>a)) {
			printf("%f, %f, %f la 3 canh cua mot tam giac\n",a,b,c );
	} 
*/

/*	//BT 5
	double a, b, c, delta, x1, x2, realPart, imagPart;

    printf("Giai phuong trinh bac hai: ax^2 + bx + c = 0\n");
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // TH1: a = 0 -> Phuong trinh tro thanh phuong trinh bac nhat bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem duy nhat: x = %.2f\n", -c / b);
        }
    } 
    // TH2: a != 0 -> Giai phuong trinh bac hai thuc thu
    else {
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
        } else {
            // Truong hop Delta < 0: Nghiem phuc (Optional)
            realPart = -b / (2 * a);
            imagPart = sqrt(-delta) / (2 * a);
            printf("Phuong trinh co 2 nghiem phuc phan biet:\n");
            printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
            printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
        }
    }
*/

/*	//BT 6
	int n, tram, chuc, donvi;

    printf("Nhap vao mot so co 3 chu so (100-999): ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Vui long nhap so trong khoang 100 den 999.\n");
        return 0;
    }

    tram = n / 100;
    chuc = (n / 10) % 10;
    donvi = n % 10;

    // Doc hang tram
    switch (tram) {
        case 1: printf("Mot tram "); break;
        case 2: printf("Hai tram "); break;
        case 3: printf("Ba tram "); break;
        case 4: printf("Bon tram "); break;
        case 5: printf("Nam tram "); break;
        case 6: printf("Sau tram "); break;
        case 7: printf("Bay tram "); break;
        case 8: printf("Tam tram "); break;
        case 9: printf("Chin tram "); break;
    }

    // Doc hang chuc
    if (chuc == 0 && donvi != 0) {
        printf("le ");
    } else if (chuc == 1) {
        printf("muoi ");
    } else if (chuc > 1) {
        switch (chuc) {
            case 2: printf("hai muoi "); break;
            case 3: printf("ba muoi "); break;
            case 4: printf("bon muoi "); break;
            case 5: printf("nam muoi "); break;
            case 6: printf("sau muoi "); break;
            case 7: printf("bay muoi "); break;
            case 8: printf("tam muoi "); break;
            case 9: printf("chin muoi "); break;
        }
    }

    // Doc hang don vi
    if (donvi != 0) {
        switch (donvi) {
            case 1: 
                if (chuc > 1) printf("mot"); 
                else printf("mot"); 
                break;
            case 2: printf("hai"); break;
            case 3: printf("ba"); break;
            case 4: printf("bon"); break;
            case 5: 
                if (chuc == 0) printf("nam"); 
                else printf("lam"); // Quy tac tieng Viet: muoi lam
                break;
            case 6: printf("sau"); break;
            case 7: printf("bay"); break;
            case 8: printf("tam"); break;
            case 9: printf("chin"); break;
        }
    }

    printf("\n");
*/

/*	//BT 7
	int thang, nam;

    printf("Nhap vao thang: ");
    scanf("%d", &thang);
    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le!\n");
    } else {
        switch (thang) {
            // Cac thang co 31 ngay
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Thang %d nam %d co 31 ngay.\n", thang, nam);
                break;

            // Cac thang co 30 ngay
            case 4: case 6: case 9: case 11:
                printf("Thang %d nam %d co 30 ngay.\n", thang, nam);
                break;

            // Rieng thang 2 phai xet nam nhuan
            case 2:
                if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                    printf("Thang 2 nam %d co 29 ngay (Nam nhuan).\n", nam);
                } else {
                    printf("Thang 2 nam %d co 28 ngay.\n", nam);
                }
                break;
        }
    }
*/

	float diem;
	scanf("%f",&diem);
	if (diem<=0 && diem<=5){
		printf("Hoc luc kem\n");
	} else if (diem<=5 && diem <=7){
		printf("Hoc luc trung binh\n");
	} else if (diem<=7 && diem <=8){
		printf("Hoc luc kha\n");
	} else if (diem<=8 && diem<=9){
		printf("Hoc luc gioi\n");
	} else if (diem<=9 && diem<=10){
		printf("Hoc luc xuat sac\n");
	} else {
		printf("Diem phai trong khoang (0-10)\n");
	}
}