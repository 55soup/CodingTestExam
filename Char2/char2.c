#include <stdio.h>

int main(void) {
	char colors[5][10] = {"red" , "green", "blue", "brown", "cyan" };
	//�ܾ� ������ ���
	for (int i = 0; i < 5; i++) { //�����
		printf("%s\n", colors[i]);  // Ƽ���� "XL"����� �� �� �ִ°�?
	}
	printf("\n");

	//���� ������ ���
	for (int i = 0; i < 5; i++) { //�� 
		for (int j = 0; j < 10; j++) { //��
			printf("%c  ", colors[i][j]);  // ���� "e"�� � �ִ°�?
		}
		printf("\n");
	}
	return 0;
}