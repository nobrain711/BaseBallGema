#include "myfunction.h"
#include "structure.h"
#include "DB.h"
#include "myhear.h"

int main(void) {
	int choice = 0;//�Է� ���� ���� ����
	user* u = malloc(sizeof(user));	//player ������ ����
	
	first(&choice);		//ó�� ���ӽ� �α��� �� ȸ������ â���� �ȳ�
	login(u, &choice);	//ȸ�������̳� �α��� â���� ��ȯ

	while(1){
		menu(&choice);//meun�� �Ѱ� �ְ� ���� choice�� �ּҵ� �Ѱ���
		
		switch (choice){//choice�������� ����
		case 1:
			playergame(u);//���� ����
			break;
		
		case 2:
			scoreboradchoice(u);//���� ��ȸ
			break;

		default:
			endscreen(u,NULL);//���� ���� ������ ����ü ����
		}
	}

	return 0;
}