#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <strings.h>
#include <stdlib.h>
#define ENTER '\n'


unsigned long long int GiaiThua(long long int n){
    if (n<=1){ 
        return 1;
    }
    return n*GiaiThua((n-1));
}

long long UCLN(long long a, long long b){
    if (b==0) return a;
    return UCLN(b, a%b);
}

long long BCNN(long long a, long long b){
    return (a*b)/UCLN(a,b);
}

double f(double x) {
    return sin(x * x) / exp(x);
}

int main(){
/*    double n;
    double sum=1;
    scanf("%lf",&n);

    for (double i=2; i<=n; i++){
        sum+=1/i;
    }
    printf("%lf",sum);
*/

/*
    double epsilon;
    long long int n;
    scanf("%lld",&n);
    printf("%lld",GiaiThua(n));
*/

/*
    double n; 
    do
    {
        scanf("%lf",&n);
        if (n<0 || n>10){
            printf("Invalid. Try again: ");
        }
    } while (n<0 || n>10);
    
    printf("Your score is: %lf",n);
*/

/*
    char c;
    while (c != -1)
    {
        c=getchar();
        if (c==ENTER) break;
        else{
            if (c>='0' && c<='9') continue;
            else putchar(c);
        }
    }
    putchar(ENTER);
 */

/*
    double epsilon,n;
    double temp=1.0;
    double sum=1.0;
    int i=1;
    scanf("%lf %lf",&epsilon,&n);
    while (temp>=epsilon){
        temp/=GiaiThua(i);
        sum+=temp;
        i++;
    }
    printf("%lf\n",sum );
*/
/*
    double ep,n;
    double sum=0.0;
    double temp;
    int i=0;

    scanf("%lf %lf",&ep ,&n);
    do{
        temp=1.0/(2*i+1);

        if (i%2==0){
            sum+=temp;
        } else{
            sum-=temp;
        }
        i++;
    }while (temp>=ep);
    printf("%.10f\n",sum );
    printf("%.10f\n",M_PI/4 );
*/

/*
    double ep,n,sum=0.0;
    int i=0;
    scanf("%lf %lf",&ep ,&n);
    do{
        sum+=pow(-1,i)*pow(n,2*i+1)/GiaiThua(2*i+1);
        i++;
    }while (fabs(pow(n,2*i+1)/GiaiThua(2*i+1))>=ep);
    printf("%.10f\n",sum);
    printf("%.10f\n",sin(n) );
*/

/*
    long long int  a,b;
    scanf("%lld %lld",&a,&b);
    printf("UCLN: %lld\n",UCLN(a,b));
    printf("BCNN: %lld\n",BCNN(a,b));
*/

    double a = 0.0;          // Cận dưới
    double b = 1.0;          // Cận trên
    int n = 1000000;         // Chia nhỏ thành 1 triệu đoạn để cực kỳ chính xác
    double h = (b - a) / n;  // Chiều rộng mỗi đoạn (dx)
    
    // Áp dụng công thức hình thang: 
    // Tich phan = (h/2) * [f(a) + 2*sum(f(xi)) + f(b)]
    double sum = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }

    double result = sum * h;

    printf("Gia tri xap xi cua tich phan tu 0 den 1 la: %.10f\n", result);  
    return 0;
}
