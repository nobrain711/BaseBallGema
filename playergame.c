#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

void playergame(user* u) {
	score* s = malloc(sizeof(score));
	int user1 = 0, user2 = 0, user3 = 0;//����� �Է� ����
	int comp1 = 0, comp2 = 0, comp3 = 0;//��ǻ�� �Է� ����
	int choice = 0, temp = 0;//���� ����
	int lines = 2;

	system("cls");//��� ȭ�� �ʱ�ȭ
	system("mode con: cols=80 lines=25");//��� ȭ�� ũ�⸦ �߱��忡�� ���ھ��� ���� ����� ũ��� �����Ѵ�
	
	while (1) {
		s->out = 0;//�ݺ��� ���۽� out�� 0���� �ʱ�ȭ �Ѵ�
		temp = 0;
		while (s->out != 3) {//out�� 3�� �� ������ ����ȴ�
			system("cls");//��� ȭ�� �ʱ�ȭ
			compmakenum(&comp1, &comp2, &comp3);//���� 3���� �����Ѵ�
			/*strike, ball, count�� 0���� �ʱ�ȭ ���ش�*/
			s->strike = 0;
			s->ball = 0;
			s->count = 0;
			s->totalcount = 0;
			while (s->strike != 3) {//strike�� 3�� �� ������ ����ȴ�
				ballboard(s);
				strikeboard(s);
				outboard(s);

				textcolor(BAK);
				s->count++;//���۽� ���� ����  ���� �����ش�
				userinputnum(&user1, &user2, &user3, &lines);//����ڰ� ���� 3���� �Է��Ѵ�
				/*strike, ball��Ģ�� �´��� Ȯ�� �Ѵ�*/
				s->strike = stireckeck(user1, user2, user3, comp1, comp2, comp3);
				s->ball = ballcheck(user1, user2, user3, comp1, comp2, comp3);

			}
			lines = 2;
			s->out++;//���� �ݺ����� ��� �Ǽ� out�� �ϳ� �������ش�
			temp += s->count;//������� ���ӿ��� ���� �� Ƚ���� �߰� �Ѵ�
			s->totalcount = temp;
		}

			scoreboard(u, s);//���� ������ ������ scoreboard�� �Ѱ� �ش�
			insertscore(u,s);
			choicecontinue(&choice);

			switch (choice) {
			case 1://�ٽ��ϱ�
				continue;
			case 2://���Ӽ��� �޴��� ���ư���
				free(s);
				return;
			case 3://���� ����
				endscreen(s,u);
			}
	}
}
