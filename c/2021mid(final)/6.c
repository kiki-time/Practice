#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	// a, b의 값은 그대로 두고
	// 연산하기 위한 임시a, b를 tmp1, tmp2로 선언
	int tmp1 = a;
	int tmp2 = b;
	int len_a = 0;
	int len_b = 0;

	// a, b 자릿수 구하기
	while (tmp1 > 0) {
		len_a++;
		tmp1 /= 10;
	}
	while (tmp2 > 0) {
		len_b++;
		tmp2 /= 10;
	}

	tmp1 = a;
	int result = 0;
	int key = 0;
	int divide;

	for (int i = 0; i <= len_a - len_b; i++) {
		 divide= 1;
		 // 자릿수만큼 나누기
		for (int j = 0; j < i; j++) {
			divide *= 10;
		}

		int cut = tmp1 / divide;
		int mod = 1;

		// b 자릿수만큼 나머지 
		for (int j = 0; j < len_b; j++) {
			mod *= 10;
		}
		int target = cut % mod;

		// 가장 마지막부터 ~ 만난다면 바로 출력하고 종료
		if (target == b) { 
			printf("%d\n", tmp1 / divide);
			return 0;
		}
	}

	printf("0\n");
	return 0;

}
