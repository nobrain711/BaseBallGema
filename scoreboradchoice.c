#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void scoreboradchoice(user* u) {
	int choice = 0;//���ù��� ���� ����
	system("mode con: cols=38 lines=20");//�ȳ����̶� ũ�⸦ ���� ����

	while (1) {
		system("cls");//������ ȭ�� �ʱ�ȭ
		//�Լ��� ���� �Ѱܼ� ���� ���
		linesdraw(3);
		//�Է¹��� �� �ȳ����� ���
		printf("\n\nSelect>> ");
		//choice��ġ�� ���� ����
		scanf("%d", &choice);

		//���� �Է� ���� ���� ������ ����� ��� ��� �� �ٽ� ����
		if (choice > 3 || choice < 1) {
			puts("�� �� �Է��ϼ̽��ϴ�.");
			puts("�ٽ� �Է��� �ּ���");
			Sleep(1000);//�ȳ����� �ٷ� ������ �������� ��õ��� ���
			system("cls");//ȭ�� �ʱ�ȭ
			continue;//ó������ ����������
		}

		else {
			if (choice != 3) {
				//3�� �ƴ϶�� ����
				ranking(choice);
			}
			else {
				//3�̸� �ش� �Լ����� main���� �̵�
				return;
			}
		}
	}
}