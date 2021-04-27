#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	typedef struct Hoso{
 		char HoTen[40];
 		float Diem;
 		char DC[40];
 		char SDT[10]
	}Hoso;
	int i,n;
	do{
		printf("\n Nhap vao so luong Hoc vien n>0 :");
 		scanf("%d",&n);
	}while(n<=0);
	Hoso hv[n];
	char s[40],d[40],sd[10];float m;
	for(i=0;i<n;i++)
	{
		printf("\n Nhap ten Hoc vien thu %d:",i+1);
 		fflush(stdin);
		gets(s);
 		strcpy(hv[i].HoTen,s);
		printf("\n Nhap Dia Chi Hoc vien thu %d:",i+1);
 		fflush(stdin);
		gets(d);
 		strcpy(hv[i].DC,d);
 		printf("\n Nhap SDT Hoc vien thu %d:",i+1);
 		fflush(stdin);
		gets(sd);
 		strcpy(hv[i].SDT,sd);
 		printf("\nNhap diem TB Hoc vien nay : ");
 		scanf("%f",&m);
 		hv[i].Diem=m;
 	}
 	printf("Cac hoc sinh co diem trung binh tu 3.2 tro len la : \n ");
 	for(i=0;i<n;i++)
 		if(hv[i].Diem>=3.2)
 			printf("\nHo Ten:%s \nDia Chi:%s \nSDT:%s \nDiemTB:%.2f\n",hv[i].HoTen,hv[i].DC,hv[i].SDT,hv[i].Diem);
 	
 	getch();
 	return 0;
}
 	
