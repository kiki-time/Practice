#include <stdio.h>

int main(void){
	int x, y;
	int arr[10];
	int cnt = 0;
	int sum = 0;

	scanf("%d %d", &x, &y);

	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
		if(arr[i] >= x && arr[i] <= y){
			cnt++;
			sum += arr[i];
		}
	}
	printf("%d %d", cnt, sum);

	return 0;
}

