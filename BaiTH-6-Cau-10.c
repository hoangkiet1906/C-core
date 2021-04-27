#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	int i, n;
	printf("nhap chuoi : ");
	gets(chuoi);
	n= strlen(chuoi)-1;
	for(i=n; i>=0; i--){
 		printf("%c", chuoi[i]);
	}
	getch();
	return 0;
}
