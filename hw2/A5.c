#include<stdio.h>

int GCD(int a, int b) {
	while(b != 0) {
		int r = a%b;
		a=b;
		b=r;
	}

	return a;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("GCD(%d, %d)=%d\n", a, b, GCD(a, b));
	printf("LCM(%d, %d)=%d\n", a, b, a*b/GCD(a, b));
	return 0;
}
