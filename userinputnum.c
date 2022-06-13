#include "myhear.h"
#include "myfunction.h"

void userinputnum(int* n1, int* n2, int* n3, int* ln) {

	while (1) {
		// 해당 위치에 출력
		gotoxy(50, (*ln));
		printf("숫자 입력 : ");//입력 받은 안내문 출력
		scanf("%d %d %d", n1, n2, n3);//n1,n2,n3의 주소에 직접입력

		//비슷한 정수가 잇으면 다시 입력하게 해준다
		if ((*n1) == (*n2) || (*n2) == (*n3) || (*n3) == (*n1)) {
			// 해당 위치에 출력
			gotoxy(40, 2);
			printf("중복 되었습니다 다시입력 해 주세요");
			Sleep(1000);
			gotoxy(40, 2);
			printf("                                  ");//경고 문 출력후 지움을 위함
			gotoxy(40, (*ln));
			printf("                 ");
			continue;
		}

		//만약에 정수가 1~9까지의 범위를 벗어나면 다시 입력하게 해준다
		if (((*n1) < 1 || (*n1) > 9) || ((*n2) < 1 || (*n2) > 9) || ((*n3) < 1 || (*n3) > 9)) {
			// 해당 위치에 출력
			gotoxy(40, 2);
			printf("범위 초과었습니다 다시입력 해 주세요");
			Sleep(1000);
			gotoxy(40, 2);
			printf("                                    ");//경고 문 출력후 지움을 위함
			gotoxy(50, (*ln));
			printf("                  ");				  // 입력 안내문 지우기 위한 용도
			continue;
		}

		//아무런 문제가 없으면 ln을 증가 후 함수를 종료한다
		(*ln)++;
		return;
	}
}