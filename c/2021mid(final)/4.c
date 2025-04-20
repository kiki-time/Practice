#include <stdio.h>

int main(void){
	int n;
	int m=0;
	int cnt = 0;
	int sum = 0;

	scanf("%d %d", &n, &m);

	for(int i = n; cnt < m ; i++){
		for(int j = 2; ; j++){
			if (i == 2 || i==3 ){
				cnt++;
				sum += i;
				break;
			}
			
			if(i % j == 0)
				break;
			
			if (j == i / 2){
				cnt++;
				sum += i;
			}
		}
	}
	printf("%d", sum);
}
