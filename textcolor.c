#include "myhear.h"

void textcolor(int colorNum) {
	// Ŀ�ǵ� â���� ���� ��� �� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}
