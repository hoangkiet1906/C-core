#include<conio.h>
#include<stdio.h>
long Fibonaci (int n){
	if(n==0 || n==1)
	return 1;
	return Fibonaci(n-1) + Fibonaci(n-2);
}
int main(){
	int i;
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("cac so trong day fibonaci");
	for (i = 0; i<n; i++)
	printf("%u\t", Fibonaci(i) ); 
	getch();
	return 0;
}
