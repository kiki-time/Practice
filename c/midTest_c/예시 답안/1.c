#include <stdio.h>

int main(void){
	int month;
	scanf("%d", &month);

	if(month== 3 || month == 4 || month == 5)
		printf("Spring");
	else if(month == 6 || month == 7 || month == 8)
		printf("Summer");
	else if(month == 9 || month == 10 || month == 11)
		printf("Fall");
	else if(month == 12 || month == 1 || month == 2)
		printf("Winter");
	else
		printf("invalid month");

	return 0;
}
	
