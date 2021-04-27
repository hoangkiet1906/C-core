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
	printf ("so phan tu trong mang: \n");
	int i;
	for(i=0;i<n;i++)
		printf("%d \t",a[i]);
	printf("\n");
}
void chiahetcho7(int a[],int n){
	int count =0, s=0;
	int i;
	for( i=0;i<n;i++){
		if (a[i]%7 == 0){
			s=s+a[i];
			count = count +1;
		}
	}
	printf("\nSo phan tu chia het cho 7 la %d\n",count);
	printf("Tong cac phan tu chia het cho 7 la %d\n",s);
}
int main(){
	int a[50],n;
	printf("nhap so luong phan tu: ");
 	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	chiahetcho7(a,n);
	return 0;
}
