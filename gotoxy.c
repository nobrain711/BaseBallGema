#include "myhear.h"

void gotoxy(int x, int y) {
	// 커멘드 창 위치 지정
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}