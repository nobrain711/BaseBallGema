#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void first(void) {
	system("mode con: cols=38 lines=20");

	int n = 0;	//�Է� â

	while (1) {
		//�ȳ���
		puts("��������������������������������������������������������������������������");
		puts("��     �ڡ� ���� �߱� ���� �١�      ��");
		puts("��                                   ��");
		puts("��          1. ��  ��  ��            ��");
		puts("��                                   ��");
		puts("��          2. ȸ��  ����            ��");
		puts("��                                   ��");
		puts("��          3. ��      ��            ��");
		puts("��                                   ��");
		puts("��������������������������������������������������������������������������");

		//�Է� �ޱ� ���� �ȳ��� ���
		printf("\n\nSelect>> ");
		//���ڸ� �Է� ����
		scanf("%d", n);

		///���� �Է� ���� ���� ������ ����� ��� ��� �� �ٽ� ����
		if ((n > 3) || (n < 1)) {
			puts("�� �� �Է��ϼ̽��ϴ�.");
			puts("�ٽ� �Է��� �ּ���");
			Sleep(1000);//�ȳ����� �ٷ� ������ �������� ��õ��� ���
			system("cls");
			continue;
		}
		else {
			switch (n) {
			case 1:
				login();
				break;
			case 2:
				insertID();
				break;
			}
		}
	}
}