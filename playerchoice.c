#include "myhear.h"
#include "myfunction.h"

void playerchoice(void) {
	int num = 0;//���ú��� ����

	system("mode con: cols=38 lines=20");//ȭ�� ũ�⿡ �°� ����
	system("cls");//ȭ�� �ʱ�ȭ

	while (1) {
		//���� �ο� ���� �ȳ��� ���
		puts("��������������������������������������������������������������������������");
		puts("��     �ڡ� ���� �ο� ���� �١�      ��");
		puts("��                                   ��");
		puts("��          1.  player  1            ��");
		puts("��                                   ��");
		puts("��          2.  players 2            ��");
		puts("��                                   ��"); 
		puts("��          3. �ڷ�  ����            ��");
		puts("��                                   ��");
		puts("��������������������������������������������������������������������������");

		printf("\n\nSelect>> ");
		scanf("%d", &num);//���� �ο� �� ����

		if (num > 3 || num < 1) {//�Է¹޴� ���� �ʰ� �� ���Է�
			puts("�� �� �Է��ϼ̽��ϴ�.");
			puts("�ٽ� �Է��� �ּ���");
			Sleep(1000);
			system("cls");
			continue;
		}
		else{
			
			switch (num){
			case 1://1�ο� �������� �̵�
				playergame();
				system("cls");
				break;

			case 2://2�ο� �������� �̵�
				playersgame();
				system("cls");
				break;

			default://3���� menu�� ���ư���
				return;
			}
		}
	}
}