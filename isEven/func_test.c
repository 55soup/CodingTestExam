#include <stdio.h>
// display �Լ� �ۼ� isEven

void display(int length, char ch) {
	for (int i = 1; i <= length; i++) {
		printf("%c", ch);
	}
}

int isEven(int num) {
	return (num % 2 == 0) ? 1 : 0;  //���׿����� ���.
	/*if (num % 2 == 0) {
		return 1;
	}else{
		return 0;
	}*/
}

int main(void) {
	display(20, '#');
	if (isEven(10) == 1) {
		printf("\n¦���Դϴ� ");
	}
	else {
		printf("\nȦ���Դϴ� ");
	}
	return 0;
}