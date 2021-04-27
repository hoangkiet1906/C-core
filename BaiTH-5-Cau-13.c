#include <stdio.h>
float Tinh (float x)
{
if (x==1)
return 0.5 ;
return Tinh(x-1) + 1/(x*(x+1)) ;
}
int main(){
	int n;
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("Tong = %.4f ",Tinh(n));
	return 0;
}
