#include <stdio.h>
long luythua(int x , int n)
{
if(n==0)
return 1;
return luythua(x,n-1)*x ;
}
long Tinh(int x , int n)
{
if(n == 1)
return x;
return Tinh(x,n-1) + luythua(x,n-1)*x;
}
int main(){
int x,n;
	printf("Nhap X = ");
	scanf("%d",&x);
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("tong = %d ",Tinh(x,n));
	return 0;
}
