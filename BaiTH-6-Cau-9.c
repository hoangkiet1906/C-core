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
void LietKe(float a[], int n){
	int i, j;
	printf("\nCac cap (a, b) thoa DK a <= b,khac nhau tung doi mot:");
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (a[i] < a[j] || a[i] == a[j]){
				printf("\nCap <%.3f, %.3f> vi tri <a[%d],a[%d]>\n", a[i],a[j], i, j);
			}
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
	LietKe(a, n);
	getch();
	return 0;
}
