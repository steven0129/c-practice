#include<stdio.h>

// 閏年: 四年一閏，百年不閏，四百年算閏

int main() {
	int n;
	while(scanf("%d", &n)==1) {
		if((n%4==0 && n%100!=0) || n%400==0) printf("Yes");
		else printf("No");
	}
}
