#include<stdio.h>
#include<process.h>
int main() {
	FILE *fp1, *fp2;
	char a;
	fp1 = fopen("baitapc.txt", "r");
	if (fp1 == NULL) {
 		puts("Khong the mo file nay");
 		exit(1);
	}
	fp2 = fopen("baitapc1.txt", "w");
	if (fp2 == NULL) {
 		puts("Khong the mo file nay");
 		fclose(fp1);
 		exit(1);
	}
	do {
 		a = fgetc(fp1);
 		fputc(a,fp2);
	} while (a != EOF);
	return(0);
}
