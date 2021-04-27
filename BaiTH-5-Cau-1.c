#include <stdio.h>
#include <conio.h>
void DoiGT(float *x, float *y) {
	int z;
	z=*x; //cách khác: *x=*x+*y;
	*x=*y; //*y=*x-*y; //*y= (*x+*y)-*y = *x
	*y=z; //*x=*x-*y; //*x= (*x+*y)-*x = *y
}
int main() {
	float x, y;
	printf("\nNhap 2 so x, y: ");
	scanf("%f %f", &x, &y);
	DoiGT(&x,&y);
	printf("\nSau khi hoan vi: x=%g va y=%g", x, y);
	getch();
	return 0;
}

