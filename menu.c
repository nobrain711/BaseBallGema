#include "myhear.h"
#include "myfunction.h"

void menu(int* n) {
	//안내문이랑 크기를 같게 설정
	system("mode con: cols=38 lines=20");

	while (1) {
		//안내 창 출력 함수에 값 전달 후 출력
		linesdraw(2);
		//입력 받기 위한 안내문 출력
		printf("\n\nSelect>> ");
		//숫자를 입력 받음
		scanf("%d", n);

		///만약 입력 받은 수가 범위를 벗어나면 경고문 출력 후 다시 실행
		if ((*n) > 3 || (*n) < 1) {
			puts("잘 못 입력하셨습니다.");
			puts("다시 입력해 주세요");
			Sleep(1000);//안내문을 바로 지우지 않을려고 잠시동안 출력
			system("cls");
			continue;
		}
	
		else {
			return;//main으로 다시 돌려보낸다
		}
	}
}
