#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void first(int* c) {
	system("mode con: cols=38 lines=20");

	while (1) {
		//안내문
		linesdraw(1);

		//입력 받기 위한 안내문 출력
		printf("\n\nSelect>> ");
		//숫자를 입력 받음
		scanf("%d", c);

		///만약 입력 받은 수가 범위를 벗어나면 경고문 출력 후 다시 실행
		if (((*c) > 3) || ((*c) < 1)) {
			puts("잘 못 입력하셨습니다.");
			puts("다시 입력해 주세요");
			Sleep(1000);//안내문을 바로 지우지 않을려고 잠시동안 출력
			system("cls");
			continue;
		}
		else if ((*c) == 3) {
			// 종료 시 구조체 종료
			endscreen(NULL,NULL);
		}
		else {
			return;
		}
	}
}