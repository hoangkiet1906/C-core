#include<stdio.h>
#include<string.h>
typedef struct in4{
	char ho[10];
	char ten[10];
	char ns[20];
	char que[20];
}in4;
int main(){
	char DN[7]="Da Nang";
	char h[10],t[10],s[10],q[10];
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	in4 sv[100];
	int i;
	for(i=0;i<n;i++){
		printf("Nhap Ho sv %d : ",(i+1));
		fflush(stdin);
		gets(h);
		strcpy(sv[i].ho,h);
		printf("Nhap Ten sv %d : ",(i+1));
		gets(t);
		strcpy(sv[i].ten,t);
		printf("Nhap NS sv %d : ",(i+1));
		gets(s);
		strcpy(sv[i].ns,s);
		printf("Nhap Que sv %d : ",(i+1));
		gets(q);
		strcpy(sv[i].que,q);
	}
	int dem=0;
	for(i=0;i<n;i++){
		if (strcmp(sv[i].que,DN)==0) {
			dem++;
		}	
	}
	printf("Co %d Sinh Vien que Da Nang \n",dem);
	printf("Cac Sinh Vien que Da Nang la \n");
	for(i=0;i<n;i++){
		if (strcmp(sv[i].que,DN)==0) {
			printf("Ho Ten : %s %s\n",sv[i].ho,sv[i].ten);
		}
	}	
}
