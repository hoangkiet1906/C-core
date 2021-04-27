#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct diem{
	float x;
	float y;
};
int main()
{
	struct diem A,B;
	float khoangcach;
	printf("Nhap toa do diem A:\n");
	scanf("%f%f",&A.x,&A.y);
	printf("Nhap toa do diem B:\n");
	scanf("%f%f",&B.x,&B.y);
	khoangcach = sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	printf("Khoang cach giua A va B la: %.2f\n",khoangcach);
	getch();
	return 0;
}
