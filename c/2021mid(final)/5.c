#include <stdio.h>

int main(void){
	int num;
	int digit;
	int cnt = 0;

	scanf("%d %d", &num, &digit);

	num = num * 3;

	for(int i = 0; num != 0; ){
		if(num % 10 == digit){
			cnt++;
		}
		num /= 10;
	}
	printf("%d", cnt);

	return 0;

}
