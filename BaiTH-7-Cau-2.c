#include <stdio.h>
#include <string.h>
#include <math.h>
int UCLN(int a, int b){
	a = abs(a);
	b = abs(b);
	while (a * b != 0){
 		if (a > b) a %= b;
 		else b %= a;
	}	
	return a + b;
}
typedef struct PhanSo{
	int tuso, mauso;
} PS;
PS Reduce(PS a){
	PS c;
	c.tuso = a.tuso / UCLN(a.tuso, a.mauso);
	c.mauso = a.mauso / UCLN(a.tuso, a.mauso);
	return c;
}
PS Sum(PS a, PS b){
	PS c;
	c.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c = Reduce(c);
	return c;
}
PS Sub(PS a, PS b){
	PS c;
	c.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c = Reduce(c);
	return c;
}
PS Prod(PS a, PS b){
	PS c;
	c.tuso = a.tuso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c = Reduce(c);
	return c;
}
void print(PS a){
	printf("%d/%d", a.tuso, a.mauso);
}
int main(){
	PS a, b, c;
	printf("\nNhap phan so a : ");
	printf("\nTu so : ");
	scanf("%d", &a.tuso);
	printf("Mau so : ");
	scanf("%d", &a.mauso);
	printf("\nNhap phan so b : ");
	printf("\nTu so : ");
	scanf("%d", &b.tuso);
	printf("Mau so : ");
	scanf("%d", &b.mauso);
	printf("\nToi gian a ta duoc : ");
	a = Reduce(a);
	print(a);
	printf("\nToi gian b ta duoc : ");
	b = Reduce(b);
	print(b);
	printf("\nTong cua hai phan so = ");
	c = Sum(a, b);
	print(c);
	printf("\nHieu cua hai phan so = ");
	c = Sub(a, b);
	print(c);
	printf("\nTich cua hai phan so = ");
	c = Prod(a, b);
	print(c);
	getch();
	return 0;
}
