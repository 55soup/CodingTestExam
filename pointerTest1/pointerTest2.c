#include <stdio.h>

int main(void) {
	int number;
	int* pNumber = NULL;
	number = 5;
	printf("number�� �� : %d\n", number);

	pNumber = &number;
	*pNumber = *pNumber + 5;
	printf("number�� �� : %d\n", number);
	printf("number�� �ּҰ� : %p\n", &number);
	printf("pNumber�� �� : %d\n", *pNumber);
	printf("pNumber�� �ּҰ� : %p\n", pNumber);

	return 0;
}