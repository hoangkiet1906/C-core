#include <stdio.h>
void in(int n)
{
	if (n>0){
		printf("%d ",n);
   		in(n-1);
	}
} 
int main(void) {
 	int n;
 	printf("Nhap n = ");
 	scanf("%d",&n);
 	in(n);
 	return 0;
}
