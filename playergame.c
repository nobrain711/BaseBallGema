#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void playergame(user* u) {
	score* s = malloc(sizeof(score));
	int user1 = 0, user2 = 0, user3 = 0;//사용자 입력 변수
	int comp1 = 0, comp2 = 0, comp3 = 0;//컴퓨터 입력 변수
	int choice = 0;//선택 변수
	int lines = 1;

	system("cls");//출력 화면 초기화
	system("mode con: cols=80 lines=25");//출력 화면 크기를 야구장에서 스코어보드랑 같은 모양의 크기로 설정한다
	while (1) {
		s->out = 0;//반복문 시작시 out을 0으로 초기화 한다
		while (s->out != 3) {//out이 3이 될 때까지 진행된다
			system("cls");//출력 화면 초기화
			compmakenum(&comp1, &comp2, &comp3, &lines);//숫자 3개를 생성한다
			/*strike, ball, count를 0으로 초기화 해준다*/
			s->strike = 0;
			s->ball = 0;
			s->count = 0;
			s->totalcount = 0;
			while (s->strike != 3) {//strike이 3이 될 때까지 진행된다
				//ballboard(s);
				//strikeboard(s);
				//outboard(s);

				s->count++;//시작시 마다 수를  증가 시켜준다
				userinputnum(&user1, &user2, &user3);//사용자가 숫자 3개를 입력한다
				/*strike, ball규칙이 맞는지 확인 한다*/
				s->strike = stireckeck(user1, user2, user3, comp1, comp2, comp3);
				s->ball = ballcheck(user1, user2, user3, comp1, comp2, comp3);
				printf("%dstrike %dball\n", s->strike, s->ball);//전광판 완성 전 현재 입력한 수의 strike, ball의 정보 확인
			}
			s->out++;//위에 반복문이 통과 되서 out을 하나 증가해준다
			s->totalcount += s->count;//현재까지 게임에서 진행 한 횟수를 추가 한다
		}

			scoreboard(u, s);//현제 까지의 정보를 scoreboard로 넘겨 준다
			insertscore(u,s);
			choicecontinue(&choice);

			switch (choice) {
			case 1://다시하기
				continue;
			case 2://게임선택 메뉴로 돌아가기
				return;
			case 3://게임 종료
				endscreen(s,u);
			}
	}
}
