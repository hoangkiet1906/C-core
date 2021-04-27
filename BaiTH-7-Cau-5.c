#include <conio.h>
#include <stdio.h>
typedef struct DIEM 
{
	int x;
	int y;
}D;
void Nhap (D d)
{
	printf ("\nNhap vao toa do diem\n");
	printf ("Tung do : ");
	scanf ("%d", & d. x);
	printf ("Hoanh do : ");
	scanf ("%d", & d.y);
}
void Xuat (D d)
{
	printf ("\nToa do diem : (%d , %d)",d.x,d.y);
}
D Tong (D d1,D d2)
{
	D temp;
	temp.x = d1.x + d2.x ;
	temp.y = d1.y + d2.y ;
	return temp;
}
int main ()
{
	D A, B, AB; 
	//Nhap (A);
	printf ("\nNhap vao toa do diem\n");
	printf ("Tung do : ");
	scanf ("%d", & A. x);
	printf ("Hoanh do : ");
	scanf ("%d", & A.y);
	Xuat (A);
	//Nhap (B);
	printf ("\nNhap vao toa do diem\n");
	printf ("Tung do : ");
	scanf ("%d", & B. x);
	printf ("Hoanh do : ");
	scanf ("%d", & B.y);
	Xuat (B);
	printf ("\n Tong cua hai diem vua nhap la : ");
	AB = Tong (A, B);
	Xuat (AB);
	getch();
	return 0;
}
