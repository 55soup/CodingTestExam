// ���ڿ��� ���̸� ���ؼ� ���̸�ŭ ����
#include <stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	//���ڿ��� ���� ���ϱ�
	while (s1[cnt] != 0) {
		++cnt; //���ڿ��� ����
	}
	// s2�� s1���ڿ� �����ϱ�
	for (int i = 0; i <= cnt; i++) { // cnt ���ڿ������̹Ƿ� <=
		s2[i] = s1[i];
	}
	printf("s1�� ���ڿ���: %s\n", s1);
	printf("s2�� ���ڿ���: %s", s2);
}