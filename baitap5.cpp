#include<stdio.h>

float K(int n) {
	int i = 1;
	float s = 0;
	while(i <= n) {
		s = s + 1.0/i;
		i++;
	}
	return s;
}

int main() {
	int x;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &x);
	float s = K(x);
	printf("S = %f", s);
}
