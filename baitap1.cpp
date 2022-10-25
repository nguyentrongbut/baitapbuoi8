#include<stdio.h>

int songhichdao(int n) {
	int i = 0;
	while(n != 0) {
		i = i * 10 + n%10;
		n = n/10;
	}
	return i;
}

int main() {
	int x;
	printf("Nhap so nguyen: ");
	scanf("%d", &x);
	int k = songhichdao(x);
	printf("so nghich dao cua %d la %d", x, k);
}
