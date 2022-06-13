#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

void playergame(user* u) {
	score* s = malloc(sizeof(score));
	int user1 = 0, user2 = 0, user3 = 0;//사용자 입력 변수
	int comp1 = 0, comp2 = 0, comp3 = 0;//컴퓨터 입력 변수
	int choice = 0, temp = 0;//선택 변수
	int lines = 4;	//입력 받는 안내문을 위한 라인넘버 변수

	system("cls");//출력 화면 초기화
	system("mode con: cols=80 lines=25");//출력 화면 크기를 야구장에서 스코어보드랑 같은 모양의 크기로 설정한다
	
	while (1) {
		s->out = 0;//반복문 시작시 out을 0으로 초기화 한다
		temp = 0;
		while (s->out != 3) {//out이 3이 될 때까지 진행된다
			system("cls");//출력 화면 초기화
			compmakenum(&comp1, &comp2, &comp3);//숫자 3개를 생성한다
			/*strike, ball, count를 0으로 초기화 해준다*/
			s->strike = 0;
			s->ball = 0;
			s->count = 0;
			s->totalcount = 0;
			outboard(s);
			while (s->strike != 3) {//strike이 3이 될 때까지 진행된다
				//해당 위치에 입력 가능범위를 출력한다
				gotoxy(40, 1);
				puts("입력범위 1에서부터 9까지입력 가능");
				//전광판 기능을 하는 함수에 가다 기능을 입력한다
				ballboard(s);
				strikeboard(s);
				
				//위에서 종료시 글자색이 검정색이여서 흰색으로 재정 해준다
				textcolor(BAK);
				s->count++;//시작시 마다 수를  증가 시켜준다
				userinputnum(&user1, &user2, &user3, &lines);//사용자가 숫자 3개를 입력한다
				/*strike, ball규칙이 맞는지 확인 한다*/
				s->strike = stireckeck(user1, user2, user3, comp1, comp2, comp3);
				s->ball = ballcheck(user1, user2, user3, comp1, comp2, comp3);
				
				//출력하는 라인이 24번째가 넘어가면 4번째로 변경해준다
				if (lines == 24) {
					lines = 4;
				}
			}
			lines = 4;	//out이 하나 올라가면 라인을 4로 초기화 해 준다
			s->out++;//위에 반복문이 통과 되서 out을 하나 증가해준다
			temp += s->count;//현재까지 게임에서 진행 한 횟수를 추가 한다
			s->totalcount = temp;
		}

			scoreboard(u, s);//현제 까지의 정보를 scoreboard로 넘겨 준다
			insertscore(u,s);
			choicecontinue(&choice);

			switch (choice) {
			case 1://다시하기
				continue;
			case 2://게임선택 메뉴로 돌아가기
				free(s);
				return;
			case 3://게임 종료
				endscreen(s,u);
			}
	}
}
