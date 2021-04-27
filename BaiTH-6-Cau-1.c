#include <stdio.h>
int main()
{
int i,n,a[100];
	printf("\nChuong trinh nhap n phan tu cua mang va xuat ra man hinh dao nguoc lai:\n");
	printf("------------------------------------------------------------------------\n");
	printf("Nhap so phan tu n cua mang :");
	scanf("%d",&n);
	printf("Nhap %d gia tri cua moi phan tu :\n",n);
	for(i=0;i<n;i++){
		printf("Phan tu - %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nDay phan tu da nhap vao: \n");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	printf("\n\nDay phan tu dao nguoc:\n");
	for(i=n-1;i>=0;i--){
		printf("% 5d",a[i]);
	}
	printf("\n\n");
	return 0;
}
