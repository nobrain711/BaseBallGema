#include "myhear.h"
#include "myfunction.h"

void playerchoice(void) {
	int num = 0;//선택변수 생성

	system("mode con: cols=38 lines=20");//화면 크기에 맞게 생성
	system("cls");//화면 초기화

	while (1) {
		//게임 인원 선택 안내문 출력
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 게임 인원 선택 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1.  player  1            ┃");
		puts("┃                                   ┃");
		puts("┃          2.  players 2            ┃");
		puts("┃                                   ┃"); 
		puts("┃          3. 뒤로  가기            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

		printf("\n\nSelect>> ");
		scanf("%d", &num);//게임 인원 수 선택

		if (num > 3 || num < 1) {//입력받는 범위 초과 시 재입력
			puts("잘 못 입력하셨습니다.");
			puts("다시 입력해 주세요");
			Sleep(1000);
			system("cls");
			continue;
		}
		else{
			
			switch (num){
			case 1://1인용 게임으로 이동
				playergame();
				system("cls");
				break;

			case 2://2인용 게임으로 이동
				playersgame();
				system("cls");
				break;

			default://3번시 menu로 돌아가기
				return;
			}
		}
	}
}