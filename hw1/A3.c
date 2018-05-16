#include<stdio.h>

int main() {
	int s;
	while(1) {
		scanf("%d", &s);
		if(s >= 60) printf("Pass");
		else if(s < 60 && s > 0) printf("Fail");
		else break;
	}
}
