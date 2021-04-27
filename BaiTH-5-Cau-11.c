#include <stdio.h>
float Tinh(int n)
{
if(n==1)
return 1;
return Tinh(n-1) + 1/n;
}
int main(){
	int n;
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("Tong = %.4f ",Tinh(n));
	return 0;
}

