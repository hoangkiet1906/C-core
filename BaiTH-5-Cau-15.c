#include <stdio.h>
long GT(int x)
{
if(x==1)
return 1;
return GT(x-1)*x;
}
long Tinh (int x)
{
if (x==1)
return 1 ;
return Tinh (x-1) + GT(x-1)*x;
}
int main(){
	int n;
	printf("Nhap N = ");
	scanf("%d",&n);
	printf("Tong = %d ",Tinh(n));
	return 0;
}
