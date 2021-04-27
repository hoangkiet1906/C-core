#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *f;
	FILE *fi;
	fi=fopen("ketqua.txt","w");
	f=fopen("input.txt","r");
	char a[20];
	int i=0;
	do
	{ 
		fscanf(f,"%c",&a[i]);
		i++;
	} while (!feof(f));
	fprintf(fi,"Tep co %d ky tu\n",(i-1));
	int j=0,dem=1;
	for(j=0;j<strlen(a);j++){
		if(a[j]==' ') dem++;
	}
	fprintf(fi,"Tep co %d tu\n",dem);
	
	fclose(fi);
	fclose(f);
	return 0;
}
