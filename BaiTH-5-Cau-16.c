#include <stdio.h>
float luythua(float x , int n)
{
if(n==0)
return 1;
if(n<0)
return luythua(x,n+1) * 1/x ;
return luythua(x,n-1)*x ;
}
int main(){
	int x,n;
	printf("Nhap X = ");
	scanf("%d",&x);
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("%d^%d=%.3f ",x,n,luythua(x,n));
	return 0;
}

