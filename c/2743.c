#include <stdio.h>

int main(void){
	char word[101];
	int len=0;

	scanf("%s", word);

	for(; word[len] != '\0'; len++);

	printf("%d", len);
	
	return 0;
}
