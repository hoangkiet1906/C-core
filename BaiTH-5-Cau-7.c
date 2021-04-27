#include<stdio.h>
int DemSoLuongChuSo(int n){
	if (n < 0)
 		return DemSoLuongChuSo(-n);
	else if (n < 10)
 		return 1;
	else
 		return DemSoLuongChuSo(n / 10) + 1;
}
int main() {
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	printf("%d",DemSoLuongChuSo(n));
	return 0;
}
