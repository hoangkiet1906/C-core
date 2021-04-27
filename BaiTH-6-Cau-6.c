#include <stdio.h>
void nhap(int *mang, int *n) {
	int i;
	for(i = 0; i < *n; i++) {
		printf("\nPhan tu[%d] = ", i);
		scanf("%d", &mang[i]);
	}
}
void minMax(int *mang, int n, int *min, int *max) {
	int i;
	for(i = 0; i < n; i++) {
		if((*min) > mang[i]) {
			(*min) = mang[i];
		}
	if((*max) < mang[i]) {
		(*max) = mang[i];
	}
	}
}
void ketQua(int min, int max) {
	if(min == max) {
		printf("\nKhong co min, max do min = max");
	} 
	else {
		printf("\nMIN = %d\nMAX = %d\n", min, max);
	}
}
int main() {
	int n = 0;
	int mang[100];
	printf("Nhap n > 0: ");
	scanf("%d", &n);
	nhap(mang, &n);
	int min = mang[0], max = mang[0];
	minMax(mang, n, &min, &max);
	ketQua(min, max);
	return 0;
}
