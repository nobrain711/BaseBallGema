#include "myhear.h"

void gotoxy(int x, int y) {
	// Ŀ��� â ��ġ ����
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}