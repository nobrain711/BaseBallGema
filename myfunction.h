#pragma once
#include "structure.h"

void menu(int*);								// 메뉴출력하고 선택하는 함수
void scoreboradchoice(void);					// 점수판을 점수판 승률을 나타낸는 함수
void endscreen(void);							// 프로그램을 종료하는 함수
void playergame(void);							// 1인용 게임하는 함수
void compmakenum(int*, int*, int*);				// 컴퓨터가 숫자를 생성하는 함수
void userinputnum(int*, int*, int*);			// 사용자가 숫자를 입력하는 함수
int stireckeck(int, int, int, int, int, int);	// strick를 세는 함수
int ballcheck(int, int, int, int, int, int);	// ball을 세는 함수
void choicecontinue(int*);						// 게임 종료 후 계속 진행을 할 것 인지 문는 함수
void scoreboard(int, char*);					// 게임의 종료 후 현재까지 한 정보를 보여주는 함수
void gotoxy(int, int);							// 콘솔창 위치 지정
void strikeballborad(void);						// 스트라이크 카운트 표시
void textcolor(int);							// 글자 색 변경
void insertscore(int, char*);					// 점수 입력
void first(int*);								// 첫 화면
void login(user*, int*);						// DB에서 회원관련