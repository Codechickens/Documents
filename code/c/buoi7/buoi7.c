#include <stdio.h>

int main(){
	// VD6.3
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
}