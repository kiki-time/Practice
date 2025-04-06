// 2753.c

#include <stdio.h>

int main(void){
	int year, result = 0;

	scanf("%d", &year);

	if(year % 4 == 0 && year % 100 != 0)
		result = 1;
	else if(year % 400 == 0)
		result = 1;
	else
		result = 0;

	printf("%d", result);
	
	return 0;
}
