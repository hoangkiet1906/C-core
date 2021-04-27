#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhap (float a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}
void xuat(float a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%8.3f", a[i]);
	}
}
void lietkecacvitriam(float a[], int n){
	int i;
	for( i = 0; i < n; i++){
		if(a[i] < 0){
			printf("%d ", i);
		}
	}
}
int main(){
	int n;
	float a[MAX];
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	nhap(a, n);
	xuat(a, n);
	printf("\nCac vi tri chua gia tri am la: ");
	lietkecacvitriam(a, n);
	getch();
	return 0;
}
