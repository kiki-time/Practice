#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	// a, b�� ���� �״�� �ΰ�
	// �����ϱ� ���� �ӽ�a, b�� tmp1, tmp2�� ����
	int tmp1 = a;
	int tmp2 = b;
	int len_a = 0;
	int len_b = 0;

	// a, b �ڸ��� ���ϱ�
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
		 // �ڸ�����ŭ ������
		for (int j = 0; j < i; j++) {
			divide *= 10;
		}

		int cut = tmp1 / divide;
		int mod = 1;

		// b �ڸ�����ŭ ������ 
		for (int j = 0; j < len_b; j++) {
			mod *= 10;
		}
		int target = cut % mod;

		// ���� ���������� ~ �����ٸ� �ٷ� ����ϰ� ����
		if (target == b) { 
			printf("%d\n", tmp1 / divide);
			return 0;
		}
	}

	printf("0\n");
	return 0;

}
