#include "myfunction.h"

int main(void) {
	int choice = 0;//�Է� ���� ���� ����

	while(1){
		menu(&choice);//meun�� �Ѱ� �ְ� ���� choice�� �ּҵ� �Ѱ���
		
		switch (choice){//choice�������� ����
		case 1:
			playerchoice();//���� ����
			break;
		
		case 2:
			scoreboradchoice();//���� ��ȸ
			break;

		default:
			endscreen();//���� ����
		}
	}
	//strikeballborad();
	return 0;
}