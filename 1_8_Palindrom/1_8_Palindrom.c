#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool solution(char *str) {
	// ���� + malloc
	char* newStr = (char*)malloc(sizeof(char) * 103); //���� sentence�� ���̴� 1�̻� 100�����Դϴ�.  100���� ���� ũ��
	newStr = str;
	for (int i = 0; i < strlen(newStr)/2; i++) {//���ڿ� ������ �� ��ŭ ��������.
		if (newStr[i] != newStr[strlen(newStr) - 1 - i]) { // �չ��ڿ� �ڿ� ���ڰ� �������� ��
			return false;
		}
	}
	return true;
}
int main(void) {
	char str[] = "racecar";
	int result;
	result = solution(str);
	if (result == true) {
		printf("�Ӹ���ҹ����Դϴ�.");
	}
	else {
		printf("�Ӹ���ҹ��ڰ� �ƴմϴ�.");
	}
	return 0;
}