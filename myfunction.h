#pragma once
void menu(int*);								// �޴�����ϰ� �����ϴ� �Լ�
void playerchoice(void);						// ���� �ο� �� �����ϴ� �Լ�
void scoreboradchoice(void);					// �������� ������ �·��� ��Ÿ���� �Լ�
void endscreen(void);							// ���α׷��� �����ϴ� �Լ�
void playergame(void);							// 1�ο� �����ϴ� �Լ�
void playersgame(void);							// 2�ο� �����ϴ� �Լ�
void compmakenum(int*, int*, int*);				// ��ǻ�Ͱ� ���ڸ� �����ϴ� �Լ�
void userinputnum(int*, int*, int*);			// ����ڰ� ���ڸ� �Է��ϴ� �Լ�
int stireckeck(int, int, int, int, int, int);	// strick�� ���� �Լ�
int ballcheck(int, int, int, int, int, int);	// ball�� ���� �Լ�
void choicecontinue(int*);						// ���� ���� �� ��� ������ �� �� ���� ���� �Լ�
void scoreboard(int, char*);					// ������ ���� �� ������� �� ������ �����ִ� �Լ�
void gotoxy(int, int);							// �ܼ�â ��ġ ����
void strikeballborad(void);						// ��Ʈ����ũ ī��Ʈ ǥ��
void textcolor(int);							// ���� �� ����
void insertscore(int, char*);					// ���� �Է�
void insertID(void);							// ȸ������
void first(void);								// ù ȭ��
void login(void);