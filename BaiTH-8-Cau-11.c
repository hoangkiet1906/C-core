#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *f;
	FILE *fc,*fl;
	f=fopen("songuyen.inp","r");
	fc=fopen("sochan.out","w");
	fl=fopen("sole.out","w");
	int s;
	while(!feof(f)){
		fscanf(f,"%d",&s);
		if (s%2==0) fprintf(fc,"%d ",s);
		else fprintf(fl,"%d ",s);
	}
	fclose(f);
	fclose(fc);
	fclose(fl);
	return 0;
}
