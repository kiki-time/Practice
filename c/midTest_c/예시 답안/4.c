#include <stdio.h>

int main(void){
	int target;
	int i = 1;
	int sum = 0;

	scanf("%d", &target);

	while(sum < target){
		sum += i;
		if(sum == target)
			break;
		i++;
	}

	if(sum == target)
		printf("%d", i);
	else
		printf("No match");

	return 0;
}
