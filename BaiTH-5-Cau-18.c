#include <stdio.h>
void np(int n)
{
   if (n>=0)
   {
     if (n/2>0) np(n/2);
     printf("%d",n%2);
   }
} 
int main(void) {
 	int n;
 	printf("Nhap n = ");
 	scanf("%d",&n);
 	np(n);
 	return 0;
}
