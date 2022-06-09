#include "myhear.h"
#include "myfunction.h"

void scoreboradchoice(void) {
	int choice = 0;//선택받을 공간 생성
	system("mode con: cols=38 lines=20");//안내문이랑 크기를 같게 설정

	while (1) {
		system("cls");//시작전 화면 초기화
		//안내문은 puts로 사용 이유는 문자열 형태로만 입력이 가능하고 자동으로 줄을 념겨주서 사용
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 숫자 야구 게임 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1. 랭킹  조회            ┃");
		puts("┃                                   ┃");
		puts("┃          2. 내점수조회            ┃");
		puts("┃                                   ┃");
		puts("┃          3. 뒤로  가기            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

		//입력받은 곳 안내문을 출력
		printf("\n\nSelect>> ");
		//choice위치에 숫자 저장
		scanf("%d", &choice);

		//만약 입력 받은 수가 범위를 벗어나면 경고문 출력 후 다시 실행
		if (choice > 3 || choice < 1) {
			puts("잘 못 입력하셨습니다.");
			puts("다시 입력해 주세요");
			Sleep(1000);//안내문을 바로 지우지 않을려고 잠시동안 출력
			system("cls");//화면 초기화
			continue;//처음으로 돌려보낸다
		}

		else {
			switch(choice){
			
			case 1://점수 조회 페이지
				ranking();
				break;

			case 2://승률 조회 페이지
				system("cls");
				printf("승률 조회 페이지");
				Sleep(1000);
				system("cls");
				break;
			
			case 3://메인 메뉴로 돌려보낸다
				return;
			}
		}
	}
}