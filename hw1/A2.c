#include<stdio.h>

int main() {
	int n, d, k;
	while(scanf("%d %d %d", &n, &d, &k)!=EOF) {
		int tmp=n;
		for(int i=1; i<k; i++) {
			tmp+=d;
		}

		printf("%d", tmp);
	}
}
