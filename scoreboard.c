#include "myhear.h"
#include "structure.h"
#include "myfunction.h"

void scoreboard(user* u, score* s) {
	//Ŀ��� â ũ��
	system("mode con: cols=42 lines=12");

	//�׵θ� ��� �ϴ� �Լ��� ���� �Ѱܼ� ���
	linesdraw(4);
	gotoxy(6, 1);
	printf("�ڡ�   %s   score   �١� ", u->ID);
	gotoxy(6, 3);
	printf("�ڡ�    score : %3d    �١�", s->totalcount);
	getch();
	gotoxy(8, 3);
	printf("�ƹ�Ű�� �����ּ���.");
	
}