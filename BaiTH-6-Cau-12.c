#include<stdio.h>
#include<conio.h>
#include<string.h>
int dem(char *s,char c){
	int dem=0;
	int i;
	for(i=0;i<=strlen(s);i++){
		if(s[i]==c) dem=dem+1;
	}
	return dem;
}
int main(){
	char s[256];
	char c;
	printf("vui long nhap chuoi: ");
	gets(s);
	puts(s);
	printf("vui long 1 ky tu: ");
	scanf("%c",&c);
	printf("%c ",c);
	printf("so lan xuat hien cua ky tu %c la: %d",c,dem(s,c));
	return 0;
}
