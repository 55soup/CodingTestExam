#include <stdio.h>
//- s1[20]={"coding test"}�� ���ڿ��� ���̸� while��(��õ)�� for���� �̿��Ͽ� ���غ���.
int main(void) {
	char s1[30] = { "coding test exercise" };
	int count = 0;
	//s1�� ���� => while => 11
	// ��ǥ�� ==0 or =='\0'
	while (s1[count] != '\0') {//���蹮���� �� ���� ����.
		++count;
	}
	printf("���ڿ��� ����: %d\n", count);
	count = 0;
	//for��
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break; //0�� ���ڰ� �ƴ� null�� �ǹ�
		++count;
	} 
	printf("���ڿ��� ����: %d", count);

	return 0;
}