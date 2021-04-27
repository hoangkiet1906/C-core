#include <stdio.h>
void read_data(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void sapxep(int a[],int n){
	int i,j,tg;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		if (a[i]>a[j]){
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
	int n,m;
	printf("Nhap n = : ");
	scanf("%d",&n);
	printf("Nhap m = : ");
	scanf("%d",&m);
	int a[100],b[100],c[200];
	read_data(a,n);
	read_data(b,m);
	int t=n+m,i,j;
	for (i=0;i<n;i++)
		c[i]=a[i];
	for (j=0;j<m;j++)
		c[j+n]=b[j];
	sapxep(c,t);
	write_data(c,t);
	return 0;
}
