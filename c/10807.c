// 10807.c

#include <stdio.h>

int main(void){
	int n;
	int inputVal[101];
	int v;
	int cnt=0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &inputVal[i]);
	}

	scanf("%d", &v);

	for(int i =0; i < n; i++){
		if(v == inputVal[i])
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
