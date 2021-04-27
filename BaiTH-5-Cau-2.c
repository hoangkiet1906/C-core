#include <stdio.h>
#include <conio.h>
void nhap(float *a, float *b, float *c) {
	printf("\nNhap a: ");
	scanf("%f", a);
	printf("\nNhap b: ");
	scanf("%f", b);
	printf("\nNhap c: ");
	scanf("%f", c);
}
float sosanh(float a, float b, float c) { 
	float max; 
	max = a; 
	if(max < b) 
	max = b; 
	if(max < c) 
 	max = c; 
	return max; 
}
int main() {
	float a, b, c; 
	float max; 
	nhap(&a,&b,&c);
	max=sosanh(a,b,c);
	printf("\nSo lon nhat trong 3 so nhap vao la: %g", max);
	getch();
	return 0;
}
