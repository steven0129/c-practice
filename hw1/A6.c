#include<stdio.h>

int main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
		int i;
		for(i=1; i<n; i++) {
			if(i*i == n) break;
		}

		if(i==n) printf("No");
		else printf("Yes");
	}
	return 0;
}
