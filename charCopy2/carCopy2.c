//���ڿ��� ���̸� ������ �ʰ� ���� => ������ ��ҿ� ���� ����
#include <stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int i;
	for (i = 0; s1[i] != 0; i++) {
		s2[i] = s1[i];
	}
	s2[i] = 0; //�������� �ι��� ����  i==���ڿ��� ����
	printf("%s", s2);
	return 0;
}