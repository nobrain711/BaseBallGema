#include "myhear.h"
#include "myfunction.h"

void menu(int* n) {
	//�ȳ����̶� ũ�⸦ ���� ����
	system("mode con: cols=38 lines=20");

	while (1) {
		//�ȳ���
		linesdraw(2);
		//�Է� �ޱ� ���� �ȳ��� ���
		printf("\n\nSelect>> ");
		//���ڸ� �Է� ����
		scanf("%d", n);

		///���� �Է� ���� ���� ������ ����� ��� ��� �� �ٽ� ����
		if ((*n) > 3 || (*n) < 1) {
			puts("�� �� �Է��ϼ̽��ϴ�.");
			puts("�ٽ� �Է��� �ּ���");
			Sleep(1000);//�ȳ����� �ٷ� ������ �������� ��õ��� ���
			system("cls");
			continue;
		}
	
		else {
			return;//main���� �ٽ� ����������
		}
	}
}
