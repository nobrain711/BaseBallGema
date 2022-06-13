#include "myhear.h"
#include "structure.h"
#include "myfunction.h"

void scoreboard(user* u, score* s) {
	//커멘드 창 크기
	system("mode con: cols=42 lines=12");

	//테두리 출력 하는 함수에 값을 넘겨서 출력
	linesdraw(4);
	gotoxy(6, 1);
	printf("★☆   %s   score   ☆★ ", u->ID);
	gotoxy(6, 3);
	printf("★☆    score : %3d    ☆★", s->totalcount);
	getch();
	gotoxy(8, 3);
	printf("아무키나 눌러주세요.");
	
}