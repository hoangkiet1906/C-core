#include <stdio.h>
#include <string.h>
char kiemtra(char chuoi[100], char n){
 	int i, dem = 0;
 	for (i = 0; i < strlen(chuoi); i++){
 		if (chuoi[i] == n){
 			dem++;
 		}
 	}
 	if (dem > 0){
 		printf("\n Ky tu %c xuat hien %d lan ", n, dem);
 	}
 	if (dem == 0){
 		return 1;
 	}
}
int main()
{
 	char chuoi[100], n;
 	int dem = 0;
 	printf(" Nhap chuoi: ");
 	gets(chuoi);
 	printf(" Chuoi vua nhap la : %s", chuoi);
 	printf("\n Xin moi ban nhap vao ky tu can dem:");
 	scanf("%c", &n);
 	if (kiemtra(chuoi, n) == 1){
 		printf("\n Ky tu %c khong co trong chuoi\n", n);
 	}
	return 0;
}
