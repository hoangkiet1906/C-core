#include <stdio.h> 
#include <conio.h> 
void main() { 
	int i = 1,n, max; 
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i < n) { 
		if(n % i == 0) { 
			if(i % 2 == 1){ 
				max = i; 
			} 
		} 
		i++; 
	} 
	printf("Max = %i", max); 
	getch(); 
}




