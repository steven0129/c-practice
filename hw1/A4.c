#include<stdio.h>
#define max(a, b) a>b?a:b
#define min(a, b) a<b?a:b

int main() {
	int n1, n2, n3;
	while(scanf("%d %d %d", &n1, &n2, &n3)!=EOF) {
		printf("Max:%d\n", max(max(n1, n2), n3));
		printf("Min:%d\n", min(min(n1, n2), n3));
	}

	return 0;
}
