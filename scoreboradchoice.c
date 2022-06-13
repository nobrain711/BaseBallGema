#include "myhear.h"
#include "myfunction.h"
#include "structure.h"

void scoreboradchoice(user* u) {
	int choice = 0;//선택받을 공간 생성
	system("mode con: cols=38 lines=20");//안내문이랑 크기를 같게 설정

	while (1) {
		system("cls");//시작전 화면 초기화
		//함수에 값을 넘겨서 내용 출력
		linesdraw(3);
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
			if (choice != 3) {
				//3이 아니라면 종료
				ranking(choice);
			}
			else {
				//3이면 해당 함수에서 main으로 이동
				return;
			}
		}
	}
}