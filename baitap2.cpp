#include<stdio.h>

int max(int a, int b, int c) {
	int d = a;
	if(b > d)
		d = b;
	if(c > d)
		d = c;
	return d;
}

int main() {
	int x, y, z;
	printf("Nhap so thu nhat: ");
	scanf("%d", &x);
	printf("Nhap so thu hai: ");
	scanf("%d", &y);
	printf("Nhap so thu ba: ");
	scanf("%d", &z);
	int k = max(x, y, z);
	printf("max la %d", k);
}
