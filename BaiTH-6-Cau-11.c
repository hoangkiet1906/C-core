#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main(){
	char s[100];
	int i;
	printf("\nNhap vao mot chuoi : ");
	gets(s);
	i = 0;
	while (s[i] != 0){
		if (isalpha(s[i]))
			if (s[i] < 97)
				s[i] += 32;
			else
				s[i] -= 32;
		i++;
	}
	printf("\nChuoi bien thanh : %s", s);
	getch();
	return 0;
}
