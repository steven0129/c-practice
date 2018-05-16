#include<stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	
	printf("x+y=%d\n", x+y);
	printf("x-y=%d\n", x-y);
	printf("x*y=%d\n", x*y);
	if(y==0) printf("can't be divided by 0\n");
	else printf("x/y=%d\n", x/y);
	return 0;
}
