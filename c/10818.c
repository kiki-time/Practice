// 10818.c

#include <stdio.h>

int main(void){
	int n;
	int max = -1000000, min = 1000000;

	scanf("%d", &n);

	int arr[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > max)
			max= arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	printf("%d %d", min, max);

	return 0;
}

	
