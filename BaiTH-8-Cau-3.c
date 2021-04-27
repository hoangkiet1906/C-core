#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX_LENTH 100
int main()
{
	FILE *fp = NULL;
	int i;
	int arr[MAX_LENTH];
	fp = fopen("output.txt", "w");
	if (!fp)
	{
 			printf("\nError in opening file");
	}
	else
	{
 		for (i = 0; i < MAX_LENTH; i++)
 			{
 				arr[i] = rand();
 				fprintf(fp, "%d\t", arr[i]);
 			}
 		printf("\nFile is created successfully");
 		fclose(fp);
	}
	getch();
	return 0;
}
