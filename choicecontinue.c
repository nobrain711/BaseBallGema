#include "myhear.h"

void choicecontinue(int* num) {
	system("mode con: cols=38 lines=20");

	//���� ���� ȭ��
	puts("��������������������������������������������������������������������������");
	puts("��     �ڡ� coutiune game? �١�      ��");
	puts("��                                   ��");
	puts("��          1. �ٽ�  �ϱ�            ��");
	puts("��                                   ��");
	puts("��          2. �޴�  ����            ��");
	puts("��                                   ��");
	puts("��          3. ����  �Ͻ�            ��");
	puts("��                                   ��");
	puts("��������������������������������������������������������������������������");

	printf("\n\nSelect>> ");
	scanf("%d", num);
}