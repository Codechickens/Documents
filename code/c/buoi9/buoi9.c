#include <stdio.h>
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

    double ep,n;
    double sum=0.0;
    double temp=1.0;
    int i=0;

    scanf("%lf %lf",&ep ,&n);
    while (temp>=ep){
        temp/=(2*i+1);

        if (i%2==0){
            sum+=temp;
        } else{
            sum-=temp;
        }
        i++;
    }
    printf("%.10f\n",sum );
    printf("%.10f\n",M_PI/4 );
    return 0;
}
