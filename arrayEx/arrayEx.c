#include <stdio.h>
#include <string.h>	

int solution(int scores[], int scores_len) { // �Ű����� : ������Ÿ�� �����̸�
	int count=0; //�� ��
	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 650 && scores[i] < 800) { // 650�� �̻� 800�� �̸�
			++count;
		}
	}
	return count; //�ο��� ����.
}

int main(void) {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int result;
	result = solution(score, 10); //solution �Լ��� ������
	printf("������� : %d\n", result);
	return 0;
}