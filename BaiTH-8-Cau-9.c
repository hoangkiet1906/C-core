#include <stdio.h>
#include <stdlib.h>
int main(){
	float a,b;
	printf("Nhap 2 so \n");
	scanf("%f %f",&a,&b);
	FILE *f;
	f=fopen("D:\\test.txt","w");
	fprintf(f,"%.2f %.2f",a,b);
	printf("tong 2 so la %.2f : ",(a+b));
	printf("\nhieu 2 so la %.2f : ",(a-b));
	printf("\ntich 2 so la %.2f : ",(a*b));
	printf("\nthuong 2 so la %.2f : ",(a/b));
	fclose(f);
	return 0;
}
