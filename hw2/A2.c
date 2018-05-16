#include<stdio.h>

int swap(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

int main() {
	while(1) {
		int arr[10];

		for(int i=0; i<10; i++) {
			scanf("%d", &arr[i]);
		}
		
		for(int i=0; i<9; i++) {
			for(int j=0; j<10-i-1; j++) {
				if(arr[j] < arr[j+1]) swap(&arr[j], &arr[j+1]);
			}
		}

		for(int i=0; i<10; i++) printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;
}
