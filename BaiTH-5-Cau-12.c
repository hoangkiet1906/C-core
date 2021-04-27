#include <stdio.h>
float Tinh (float x)
{
if (x==1)
return 1 ;
return Tinh(x-1) + 1/(2*x) ;
}
int main(){
	int n;
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("Tong = %.4f ",Tinh(n));
	return 0;
}
