#include "myhear.h"
#include "myfunction.h"

void choicecontinue(int* num) {
	system("mode con: cols=38 lines=20");

	//���� ���� ȭ��
	//�� ����
	linesdraw(6);

	printf("\n\nSelect>> ");
	scanf("%d", num);
}