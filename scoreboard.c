#include "myhear.h"
#include "structure.h"

void scoreboard(user* u, score* s) {
	system("mode con: cols=42 lines=12");

		puts("����������������������������������������������������������������������������������");
      printf("��     �ڡ�   %s   score   �١�       ��\n",u->ID);
		puts("��                                       ��");
	  printf("��     �ڡ�    ���� �� : %2d    �١�      ��\n", s->totalcount);
		puts("����������������������������������������������������������������������������������");
		system("pause");

	
}