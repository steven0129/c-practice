#include<stdio.h>
#define max(a, b) a>b?a:b
#define min(a, b) a<b?a:b
#define sum(a, b) a+b

int main() {
	while(1) {
		int maxVal=0, minVal=9999999, sumVal=0, tmp;
		for(int i=0; i<10; i++) {
			scanf("%d", &tmp);
			maxVal = max(maxVal, tmp);
			minVal = min(minVal, tmp);
			sumVal = sum(sumVal, tmp);
		}
		
		printf("max number:%d\n", maxVal);
		printf("min number:%d\n", minVal);
		printf("average:%f\n", (float)sumVal/10.0);
	}
	
	return 0;
}
