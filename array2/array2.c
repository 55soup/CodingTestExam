#include <stdio.h>
int arr1[10]; //�������� => �Լ����� �����ϴ� ���� => �ʱ�ȭ ���ص���.

int main(void) {
	//int num = 10;
	//int arr[num];

	int arr2[10];  // main ������ �����ϴ� �������� => �ʱ�ȭ

	for (int i = 0; i < 10; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);  //���������� �ʱ�ȭ ���� �ʾƵ���. �����Ⱚ�� �ȵ�.
	}
	
	return 0;
}               