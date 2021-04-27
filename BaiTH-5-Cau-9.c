#include<stdio.h>

int USCLN(int a, int b) {
	if (b == 0) return a;
	return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
	return (a * b) / USCLN(a, b);
}
int main() {
	int a, b;
	printf("Nhap so nguyen duong a = ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b = ");
	scanf("%d", &b);
	printf("USCLN cua %d va %d la: %d\n", a, b, USCLN(a, b));
	printf("USCLN cua %d va %d la: %d", a, b, BSCNN(a, b));
	return 0;
}
