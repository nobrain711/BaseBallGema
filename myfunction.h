#pragma once
#include "structure.h"

void menu(int*);								// �޴�����ϰ� �����ϴ� �Լ�
void scoreboradchoice(user*);					// �������� ������ �·��� ��Ÿ���� �Լ�
void endscreen(user*, score*);					// ���α׷��� �����ϴ� �Լ�
void playergame(user*);							// 1�ο� �����ϴ� �Լ�
void compmakenum(int*, int*, int*);				// ��ǻ�Ͱ� ���ڸ� �����ϴ� �Լ�
void userinputnum(int*, int*, int*);			// ����ڰ� ���ڸ� �Է��ϴ� �Լ�
int stireckeck(int, int, int, int, int, int);	// strick�� ���� �Լ�
int ballcheck(int, int, int, int, int, int);	// ball�� ���� �Լ�
void choicecontinue(int*);						// ���� ���� �� ��� ������ �� �� ���� ���� �Լ�
void scoreboard(user*, score*);					// ������ ���� �� ������� �� ������ �����ִ� �Լ�
void gotoxy(int, int);							// �ܼ�â ��ġ ����
void strikeballborad(void);						// ��Ʈ����ũ ī��Ʈ ǥ��
void textcolor(int);							// ���� �� ����
void insertscore(user*, score*);				// ���� �Է�
void first(int*);								// ù ȭ��
void login(user*, int*);						// DB���� ȸ������
void ranking(void);								// ��ŷ ��ȸ
void myranking(user*);							// �α��ε� ���̵� ��ŷ ��ȸ