#include <stdio.h>
void read_data(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void sapxep(int a[],int n){
	int i,j,tg;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		if (a[i]%2==0){
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
}
void write_data(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("Nhap n = : ");
	scanf("%d",&n);
	int a[100];
	read_data(a,n);
	sapxep(a,n);
	write_data(a,n);
	return 0;
}
