#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	typedef struct Hoso{
 		char HoTen[40];
 		float Diem;
 		char Loai[10];
	} Hoso;
	int i,n;
	do{
		printf("\n Nhap vao so luong Hoc vien n>0 :");
 		scanf("%d",&n);
	}while(n<=0);
	Hoso hv[n];
	char s[40];float d;
	for(i=0;i<n;i++)
	{
		printf("\n Nhap ten Hoc vien thu %d:",i+1);
 		fflush(stdin);
		gets(s);
 		strcpy(hv[i].HoTen,s);
 	do{
		printf("\n Diem Hoc vien nay 0<=diem<=10 : ");
 		scanf("%f",&d);
	}while(d<0||d>10);
 	hv[i].Diem=d;
 	if (d>8) strcpy(hv[i].Loai,"Gioi");
 	if (d>6&&d<=8)strcpy(hv[i].Loai,"Kha");
 	if (d>=5&&d<=6) strcpy(hv[i].Loai,"Trung binh");
 	if (d<5) strcpy(hv[i].Loai,"Ko dat");
	}
	printf("\n%40s","XEP LOAI HOC VIEN");
		printf("\n%-30s","HO VA TEN");
	printf("%-20s","DIEM");
	printf("%s","   XEP LOAI");
	for(i=0;i<n;i++)
 		printf("\n%-30s%-23.1f%s",hv[i].HoTen,hv[i].Diem,hv[i].Loai);
	getch();
	return 0;
}
