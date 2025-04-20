#include <stdio.h>

int main(void){
	int x, y;
	int num;
	int cnt = 0;
	int sum = 0;

	scanf("%d %d", &x, &y);

	for(int i=0; i<10; i++){
		scanf("%d", &num);
		if(num > x && num < y){
			cnt++;
			sum += num;
		}
	}
	printf("%d\n%d", sum, cnt);
	
	return 0;
}
