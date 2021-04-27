#include<stdio.h>
#include<conio.h>
#include<math.h>
int gt(int n);
int main(){
	int n,i,s,m,t;
	printf("Nhap so can kiem tra n=",n);
	scanf("%d",&n);
	s=0;
	m=n;
	while (n>0){
	t=n%10;
	s+=gt(t);
	n=n/10;
	}
	if (s==m) printf("La so bang tong giai thua chinh nó");
	else printf("Khong phai la so bang tong giai thua chinh no");
	getch();
	return 0;
}
int gt(int n){
	if (n==0||n==1) return 1;
	else return n*gt(n-1);
}
