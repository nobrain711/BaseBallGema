#include "myhear.h"

void choicecontinue(int* num) {
	system("mode con: cols=38 lines=20");

	//게임 종료 화면
	puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	puts("┃     ★☆ coutiune game? ☆★      ┃");
	puts("┃                                   ┃");
	puts("┃          1. 다시  하기            ┃");
	puts("┃                                   ┃");
	puts("┃          2. 메뉴  가기            ┃");
	puts("┃                                   ┃");
	puts("┃          3. 종료  하시            ┃");
	puts("┃                                   ┃");
	puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

	printf("\n\nSelect>> ");
	scanf("%d", num);
}