#include<stdio.h>
#include<conio.h>
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
void tong(int a[],int n){
	int s=0;
	int i;
	printf("\nTong cac so trong day la: ");
	for(i=0;i<n;i++){
		s=s+a[i];
	}	
	printf("%d",s);
}
int main(){
	int a[50],n;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	tong(a,n);
	return 0;
}

