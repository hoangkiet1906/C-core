#include <stdio.h>
void read_data(int a[][100],int n,int m){
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
	}
}
void BubbleSortA(int a[][100], int m, int n)
{
	int k,i,j;
   	for(k = 0; k<m ; k++)
      for( i = 0; i<n-1 ; i++)
      	for( j = n-1; j>i ; j--)
      		if(a[k][j]<a[k][j-1]){
         		int temp = a[k][j];
         		a[k][j] = a[k][j-1];
         		a[k][j-1] = temp;
      		}
}
void write_data(int a[][100],int n,int m){
	int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){	
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("Nhap hang = : ");
	scanf("%d",&n);
	int m;
	printf("Nhap cot = : ");
	scanf("%d",&m);
	int a[100][100];
	read_data(a,n,m);
	BubbleSortA(a,n,m);
	write_data(a,n,m);
	return 0;
}
