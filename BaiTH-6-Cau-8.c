#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhap (int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	int i;
	for( i = 0; i < n; i++){
		printf("%4d", a[i]);
	}
}
int KiemTraDang2K(int n){
	if (n <= 1)
 	return 1;
	while(n > 1) {
 		if(n % 2 != 0)
 		return 0;
 		n /= 2;
 	}
 	return 1;
}
int TimGiaTri2KDauTien(int a[], int n){
	int i;
	for( i = 0; i < n; i++){
		if(KiemTraDang2K(a[i]) == 1){
			return a[i];
		}
	}
	return 0;
}
int main(){
	int n;
	int a[MAX];
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	nhap(a, n);
	xuat(a, n);
	int KetQua = TimGiaTri2KDauTien(a, n);
	printf("\nGia tri 2k dau tien la %d", KetQua);
	getch();
	return 0;
}
