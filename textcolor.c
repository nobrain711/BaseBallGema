#include "myhear.h"

void textcolor(int colorNum) {
	// 커맨드 창에서 글자 출력 색 지정
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}
