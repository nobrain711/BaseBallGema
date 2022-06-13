#include "myhear.h"
#include "structure.h"

void endscreen(user* u, score* s) {
	system("cls");//커멘드 창을 한번 초기화 해준다
	system("mode con: cols=68 lines=18");//커멘드 창을 아래의 종료 안내문의 크기에 맞게 출력해준다

	//malloc해제
	free(u, s);

	//종료 안내문
	puts("■■■■■■■□□□■■■□□□□□■■■□□□■■■■■■□□□□");
	puts("■■■■■■■□□□■■■■□□□□■■■□□□■■■■■■■□□□");
	puts("■■■□□□□□□□■■■■■□□□■■■□□□■■■□□■■■□□");
	puts("■■■□□□□□□□■■■■■■□□■■■□□□■■■□□□■■■□");
	puts("■■■■■■■□□□■■■■■■■■■■■□□□■■■□□□□■■□");
	puts("■■■■■■■□□□■■■□■■■■■■■□□□■■■□□□□■■□");
	puts("■■■□□□□□□□■■■□□■■■■■■□□□■■■□□□■■■□");
	puts("■■■□□□□□□□■■■□□□■■■■■□□□■■■□□■■■□□");
	puts("■■■■■■■□□□■■■□□□□■■■■□□□■■■■■■■□□□");
	puts("■■■■■■■□□□■■■□□□□□■■■□□□■■■■■■□□□□");

	//잠시 동안 출력
	Sleep(1000);

	//프로그램 종료 명령어
	exit(0);
}