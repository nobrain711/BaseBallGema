#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void first(void) {
	system("mode con: cols=38 lines=20");

	int n = 0;	//입력 창

	while (1) {
		//안내문
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 숫자 야구 게임 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1. 로  그  인            ┃");
		puts("┃                                   ┃");
		puts("┃          2. 회원  가입            ┃");
		puts("┃                                   ┃");
		puts("┃          3. 종      료            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

		//입력 받기 위한 안내문 출력
		printf("\n\nSelect>> ");
		//숫자를 입력 받음
		scanf("%d", n);

		///만약 입력 받은 수가 범위를 벗어나면 경고문 출력 후 다시 실행
		if ((n > 3) || (n < 1)) {
			puts("잘 못 입력하셨습니다.");
			puts("다시 입력해 주세요");
			Sleep(1000);//안내문을 바로 지우지 않을려고 잠시동안 출력
			system("cls");
			continue;
		}
		else {
			switch (n) {
			case 1:
				login();
				break;
			case 2:
				insertID();
				break;
			}
		}
	}
}