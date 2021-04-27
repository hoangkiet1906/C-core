#include<stdio.h>
#include<conio.h>
typedef struct Gio
{
	int Hour, Minute, Second;
}G;
typedef struct Ngay
{
	int Day, Month, Year;
}N;
struct ChuyenBay
{
	char Ma[5], NoiDi[20], NoiDen[20];
	N NgayBay;
	G GioBay;
};
typedef struct ChuyenBay CHUYENBAY;
void XuatGio(G g)
{
	printf("%d:%d:%d", g.Hour, g.Minute, g.Second);
}
void XuatNgay(N ng)
{
	printf("%d-%d-%d", ng.Day, ng.Month, ng.Year);
}
void XuatChuyenBay(CHUYENBAY cb)
{
	printf("\nMa chuyen bay: %s", cb.Ma);
	printf("\nNoi di: %s", cb.NoiDi);
	printf("\nNoi den: %s", cb.NoiDen);
}
int main()
{
	CHUYENBAY cb;
	G g;
	N ng;
	//NhapChuyenBay;
	fflush(stdin);
	printf("\nNhap vao ma chuyen bay: ");
	gets(cb.Ma);
	fflush(stdin);
	printf("\nNhap noi di: ");
	gets(cb.NoiDi);
	fflush(stdin);
	printf("\nNhap noi den: ");
	gets(cb.NoiDen);
	printf("\nNhap vao ngay bay: ");
	//NhapNgay;
	printf("\nNhap ngay: ");
	scanf("%d", &ng.Day);
	printf("\nNhap thang: ");
	scanf("%d", &ng.Month);
	printf("\nNhap nam: ");
	scanf("%d", &ng.Year);
	printf("\nNhap vao gio bay: ");
	//NhapGio;
	printf("\nNhap gio: ");
	scanf("%d", &g.Hour);
	printf("\nNhap phut: ");
	scanf("%d", &g.Minute);
	printf("\nNhap giay: ");
	scanf("%d", &g.Second);
	XuatChuyenBay(cb);
	printf("\nNgay bay: ");
	XuatNgay(ng);
	printf("\nGio bay: ");
	XuatGio(g);
	getch();
	return 0;
}
