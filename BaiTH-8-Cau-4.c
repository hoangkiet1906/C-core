#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void transFile(FILE* inFile, FILE* outFile)
{
	int ch;
	while(1)
	{
		ch = fgetc(inFile);
		if(!feof(inFile))
		{
			fputc(ch, outFile);
		}
		else
		break;
	}
}
void UpcaseFile(FILE* inoutFile)
{
	char ch;
	long pos;
	while(!feof(inoutFile))
	{
		ch = fgetc(inoutFile);
		if(feof(inoutFile)){
			break;
		}
	pos = ftell(inoutFile);
	fseek(inoutFile, pos - 1, SEEK_SET);
	ch = toupper(ch);
	fputc(ch, inoutFile);
	fseek(inoutFile, pos, SEEK_SET);
	}	
}
int main()
{
	FILE *fpIn;
	char* fname = "Data.txt";
	FILE* fpInOut = fopen(fname, "r + b");
	if(fpInOut == NULL)
	{
		printf("File %s not found!\n", fname);
		return;
	}
	UpcaseFile(fpInOut);
	fpIn = fopen(fname,"rt");
	transFile(fpIn, stdout);
	fclose(fpIn);
	getch();
	return 0;
}
