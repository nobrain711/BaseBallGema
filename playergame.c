#include "myhear.h"
#include "myfunction.h"

void playergame(void) {
	int user1 = 0, user2 = 0, user3 = 0;//����� �Է� ����
	int comp1 = 0, comp2 = 0, comp3 = 0;//��ǻ�� �Է� ����
	int strike = 0, ball = 0, out = 0;//���� ���� ����
	int total = 0, count = 0;//���� ���� ����
	int choice = 0;//���� ����

	system("cls");//��� ȭ�� �ʱ�ȭ
	system("mode con: cols=80 lines=20");//��� ȭ�� ũ�⸦ �߱��忡�� ���ھ��� ���� ����� ũ��� �����Ѵ�
	while (1) {
		out = 0;//�ݺ��� ���۽� out�� 0���� �ʱ�ȭ �Ѵ�
		while (out != 3) {//out�� 3�� �� ������ ����ȴ�
			system("cls");//��� ȭ�� �ʱ�ȭ
			compmakenum(&comp1, &comp2, &comp3);//���� 3���� �����Ѵ�
			/*strike, ball, count�� 0���� �ʱ�ȭ ���ش�*/
			strike = 0;
			ball = 0;
			count = 0;
			while (strike != 3) {//strike�� 3�� �� ������ ����ȴ�
				count++;//���۽� ���� ����  ���� �����ش�
				userinputnum(&user1, &user2, &user3);//����ڰ� ���� 3���� �Է��Ѵ�
				/*strike, ball��Ģ�� �´��� Ȯ�� �Ѵ�*/
				strike = stireckeck(user1, user2, user3, comp1, comp2, comp3);
				ball = ballcheck(user1, user2, user3, comp1, comp2, comp3);
				printf("%dstrike %dball\n", strike, ball);//������ �ϼ� �� ���� �Է��� ���� strike, ball�� ���� Ȯ��
			}
			out++;//���� �ݺ����� ��� �Ǽ� out�� �ϳ� �������ش�
			total += count;//������� ���ӿ��� ���� �� Ƚ���� �߰� �Ѵ�
		}

			scoreboard(total, NULL);//���� ������ ������ scoreboard�� �Ѱ� �ش�
			choicecontinue(&choice);//3out������ ���� �� ������ �Ѱ���

			switch (choice) {
			case 1://�ٽ��ϱ�
				continue;
			case 2://���Ӽ��� �޴��� ���ư���
				return;
			case 3://���� ����
				endscreen();
			}
	}
}
