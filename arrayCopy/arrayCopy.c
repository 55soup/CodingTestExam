#include <stdio.h>

int main(void) {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0 };
	//a[10]�� b[10]�� �����ϱ�.
	for (int i = 0; i < 10; i++)  b[i] = a[i];

	//b[10]�� ����ϱ�.
	printf("b�迭 ���\n");
	for (int i = 0; i < 10; i++)  printf("%d\n", b[i]);
	return 0; 
}