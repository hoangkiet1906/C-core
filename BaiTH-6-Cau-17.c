#include<stdio.h>
#include<string.h>
int main(){
	char s[10],t;
	int vt=0;
	printf("vui long nhap chuoi: ");
 	gets(s);
 	printf("vui long 1 ky tu: ");
 	scanf("%c",&t);
 	printf("Nhap vi tri : ");
 	scanf("%d",&vt);
	int h=strlen(s),i;
	for(i=vt;i<h;i++){
		if (s[i]==t) {
			printf("Vi tri la : %d",(i+1));
			break;
		}
	}
	return 0;
}
