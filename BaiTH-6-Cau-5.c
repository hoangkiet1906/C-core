#include<stdio.h>
#include<conio.h>
#define MAX 100
void nhap (int a[], int n){
	int i;
	for(i = 0; i < n; i++){
	printf("\nNhap a[%d]: ", i);
	scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}
int timchancuoi(int a[], int n){
	int i;
	for( i = n - 1; i >= 0; i--){
		if(a[i] % 2 == 0){
			return a[i];
		}
	}
	return -1;
}
int main(){
	int n;
	int a[MAX];
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	nhap(a, n);
	xuat(a, n);
	int chancuoi = timchancuoi(a, n);
	printf("\nGia tri chan cuoi la %d", chancuoi);
	getch();
	return 0;
}
