#include <stdio.h>

int main(void){
	int num;
	int unit;
	int sum = 0;

	scanf("%d %d", &num, &unit);

	for(int i = 1; i <= num; i++){
		sum += i;
		if(i % unit == 0 &&  sum != 0){
			printf("%d ", sum);
			sum = 0;
		}
	}
	return 0;
}
