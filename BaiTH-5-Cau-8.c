#include<stdio.h>
int calculateSum(int);
int main() {
	int i, num;
	int result;
	printf("Nhap mot so bat ky: ");
	scanf("%d", &num);
	result = calculateSum(num);
	printf("\nTong cac so tu 1 toi %d la: %d", num, result);
return 0;
}
int calculateSum(int num) {
	int res;
	if (num == 1) {
 		return (1);
	}
	else {
 		res = num + calculateSum(num - 1);
	}
	return (res);
}
