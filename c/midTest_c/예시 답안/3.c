#include <stdio.h>

int main(void){
	int num;
	int digit;
	int cnt=0;

	scanf("%d", &num);
	scanf("%d", &digit);

	num = num * 4;

	while(num>0){
		if(num % 10 == digit)
			cnt++;
		num = num / 10;
	}
	printf("%d", cnt);

	return 0;
}
