// �ּҰ��� ��ġ�� ���϶�.
#include <stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0], min_loc = 0; // �ʱⰪ�� �迭�� ù ��° ������ ���� - �迭�ȿ� ���� ������ �ִ밪�� ������.

	for (int i = 1; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
			min_loc = i;
		}

	}

	printf("�ּҰ��� %d �Դϴ�.\n", min);
	printf("�ּҰ��� ��ġ�� �ε��� %d �Դϴ�.\n", min_loc);
	return 0;
}