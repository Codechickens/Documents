#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void m(){

}

int main(){
    /*char *s;
    int n,count=0;
    printf("enter string length:");
    scanf("%d", &n);

    getchar();
    //fflush(stdin);

    s = (char*)malloc(n * sizeof(char));
    printf("enter string: ");
    fgets(s, n*sizeof(char), stdin);

    int i=0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            count++;
        }
        i++;
    }
    printf("Number of spaces: %d\n", count);
    free(s);*/

    char *s;
    int i=0,n;
    printf("enter n: ");
    scanf("%d", &n);
    getchar();
    s = (char*)malloc(n * sizeof(char));
    printf("enter full name: ");
    fgets(s, n*sizeof(char), stdin);

    for (int i=n-1;i>=0;i-- ){
        if (s[i] == ' ') {
            for (int j=i+1; j<n; j++) {

                printf("%c", s[j]);
            }
            break;
        }
    }
    free(s);
    return 0;
}
