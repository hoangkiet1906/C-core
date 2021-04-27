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
	int i,j;
	//char tt[10],ttt[10];
	in4 tt,ttt;
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
	for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (strcmp(sv[i].ten, sv[j].ten) >= 0) {
         	tt=sv[i];
         	sv[i]=sv[j];
         	sv[j]=tt;
//            strcpy(ttt, sv[i].ten);
//            strcpy(sv[i].ten, sv[j].ten);
//            strcpy(sv[j].ten, ttt);     
//            strcpy(tt, sv[i].ho);
//            strcpy(sv[i].ho, sv[j].ho);
//            strcpy(sv[j].ho, tt);
         }
      }
   }
   printf("Danh Sach Ten SV sau khi sap xep \n");
   for(i=0;i<n;i++){
			printf("Ho Ten : %s %s\n",sv[i].ho,sv[i].ten);
		}
	printf("Nhap Ten can Tim Kiem : ");
	char ten[10];
	gets(ten);
	printf("Cac SV co ten %s la: \n",ten);
	for(i=0;i<n;i++)
			if(strcmp(sv[i].ten,ten)==0)
				printf("Ho Ten : %s %s\n",sv[i].ho,sv[i].ten);
		
}
