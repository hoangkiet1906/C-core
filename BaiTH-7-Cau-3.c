#include <stdio.h>
#include <conio.h>
typedef struct FraTag
{
 	int num;
 	int den;
}FRACTION;
int grst_comm_div(int a, int b);
int lst_comm_mult(int a, int b);
void fra_import(FRACTION* fra);
void fra_show(FRACTION fra, char name);
FRACTION fra_operator(FRACTION firstFra, FRACTION secondFra, char op);
FRACTION fra_reduce(FRACTION fra);
int main()
{
	int sel;
	char c;
	FRACTION fract[2];
	FRACTION resFra;
	fra_import(&fract[0]);
	fra_show(fract[0], '1');
	fra_import(&fract[1]);
	fra_show(fract[1], '2');
	do
	{
 		printf("\n\n1. Cong 2 phan so: C = A+B");
 		printf("\n2. Tru 2 phan so: C = A-B");
 		printf("\n3. Nhan 2 phan so: C = A*B");
 		printf("\n4. Chia 2 phan so: C = A/B");
 		printf("\nBan chon: ");
 		scanf("%d", &sel);
 		switch(sel)
 		{
 			case 1:
 			resFra = fra_operator(fract[0], fract[1], '+');
 			fra_show(resFra, '3');
 			break;
 			case 2:
			resFra = fra_operator(fract[0], fract[1], '-');
			fra_show(resFra, '3');
			break;
			case 3:
			resFra = fra_operator(fract[0], fract[1], '*');
			fra_show(resFra, '3');
			break;
			case 4:
			resFra = fra_operator(fract[0], fract[1], '/');
			fra_show(resFra, '3');
			break;
		}
 		printf("\nBan co muon tiep tuc ko: (y/n)?");
 		fflush(stdin);
 		c = getchar();
	}
	while( c == 'y' || c == 'Y');
	getch();
	return 0;
}
// Ham tim USCLN
int greatest_common_divisor(int a, int b)
{
	if(a == 0 && b == 0)
 	return -1;
	else
 	return (b == 0)? a : greatest_common_divisor(b, a%b);
}
// Ham tim BSCNN
int lowest_common_multiple(int a, int b)
{
	if(a == 0 || b == 0)
 	return -1;
	else
 	return (a*b/greatest_common_divisor(a, b));
}
// Ham nhap phan so
void fra_import(FRACTION* fra)
{
	printf("\nNhap vao tu so: ");
	scanf("%d", &fra->num);
	do
	{
 		printf("\nNhap vao mau so: ");
 		scanf("%d", &fra->den);
	}while(fra->den == 0);
}
// Ham tinh +, -, *, / 2 phan so
FRACTION fra_operator(FRACTION firstFra, FRACTION secondFra, char op)
{
	FRACTION resFra;
	int lowest_common_den;
	int greatst_common_div;
	switch(op)
	{
 		case '+':
		resFra.num = firstFra.num * secondFra.den +
		secondFra.num * firstFra.den;
		resFra.den = firstFra.den * secondFra.den;
		resFra = fra_reduce(resFra);
		break;
		case '-':
		resFra.num = firstFra.num * secondFra.den -
		secondFra.num * firstFra.den;
		resFra.den = firstFra.den * secondFra.den;
		resFra = fra_reduce(resFra);
		break;
		case '*':
		resFra.num = firstFra.num * secondFra.num;
		resFra.den = firstFra.den * secondFra.den;
		resFra = fra_reduce(resFra);
		break;
		case '/':
		resFra.num = firstFra.num * secondFra.den;
		resFra.den = firstFra.den * secondFra.num;
		resFra = fra_reduce(resFra);
		break;
		default:
		printf("\nToan tu khong hop le");
	}
	return resFra;
}
// Ham rut gon phan so
FRACTION fra_reduce(FRACTION fra)
{
	FRACTION resFra;
	int greatest_common_div = greatest_common_divisor(fra.num,
	fra.den);
	resFra.num = fra.num/greatest_common_div;
	resFra.den = fra.den/greatest_common_div;
	return resFra;
}
void fra_show(FRACTION fra, char name)
{
	printf("\nPS(%c) = %d/%d", name, fra.num, fra.den);
}
