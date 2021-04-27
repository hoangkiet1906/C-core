#include <stdio.h>
int giaithua(unsigned int i){
	if(i <= 1){
 		return 1;
	}
	return i * giaithua(i - 1);
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("Giai thua cua %d la: %d\n", n,giaithua(n));
	return 0;
}
