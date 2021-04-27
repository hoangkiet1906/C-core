#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	printf("Nhap chuoi : ");
	gets(s);
	strlwr(s);
	int h=strlen(s),i;
	s[0]=toupper(s[0]); 
	for(i=1;i<h;i++){
		if (s[i]==' ') 
		s[i+1]=toupper(s[i+1]); 
	}
	puts(s);
	return 0;
}
