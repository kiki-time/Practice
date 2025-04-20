#include <stdio.h>

int main(void){
	int n, m;
	int cnt = 0;
	int sum = 0;

	scanf("%d %d", &n, &m);

	for(int i = n; cnt < m ; i++){
		int isPrime = 1;

		if (i < 2){
			isPrime = 0;
		}else{
			for(int j = 2; j <= i / 2; j++){
				if( i % j == 0 ){
					isPrime = 0;
					break;
				}
			}
		}
		
		if (isPrime){
			sum += i;
			cnt++;
		}
	}
	printf("%d\n", sum);
	return 0;
}
