#include <stdio.h>
int main(void){
	int score;
	double sc = 1.00;

	scanf("%d", &score);

	if(score >= 100){
		sc = score * 1.5;
	}else if(score >= 50){
		sc = score * 1.25;
	}else if(score >= 10){
		sc = score * 1.15;
	}else{
		sc = score * sc;
	}
	printf("%.2f", sc);

	return 0;
}
