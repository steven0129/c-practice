#include<stdio.h>
#include<string.h>

int main() {
	char word[64];
	while(1) {
		scanf("%s", &word);
		if(strcmp("apple", word)==0) printf("apple!");
		else printf("李公蝦毀?");
	}
	return 0;
}
