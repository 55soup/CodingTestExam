#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* characters) {
	char* result = (char*)malloc(sizeof(char) * 100); //�����Ҵ�
	int len = 0; //���ڱ���

	for (int i = 0; i < strlen(characters); i++) {
		if (characters[i] != characters[i + 1]) result[len++] = characters[i]; //�������, �ڿ� ���ڰ� �ٸ��� ������ڸ� result�� �ֱ�.
	}
	result[len] = '\0'; //���� ���� �ι��� ����.

	return result;
}
int main(void) {
	char* characters = "senteeeencccccceeee";
	char* ret = solution(characters);
	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret);
	return 0;
}