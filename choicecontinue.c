#include "myhear.h"
#include "myfunction.h"

void choicecontinue(int* num) {
	system("mode con: cols=38 lines=20");

	//게임 종료 화면
	//값 전달
	linesdraw(6);

	printf("\n\nSelect>> ");
	scanf("%d", num);
}