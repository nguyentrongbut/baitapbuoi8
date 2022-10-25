#include<stdio.h>

int K(int n) {
	int i = 1;
	int s = 0;
	while(i <= n){
		s += i;
		i++;
	}
	return s;
}

int main() {
	int x;
	printf("Nhap 1 so nguyen : ");
	scanf("%d", &x);
	int s = K(x);
	printf("S = %d", s);
}
