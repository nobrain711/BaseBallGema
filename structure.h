#pragma once
typedef struct SCORE {
	//���ӿ��� �ʿ��� ������ ����ü�� ����
	int strick; 
	int ball;
	int out;
	int count;
	int totalcount;
}score;

typedef struct _USER {
	//���ӿ��� ����� ������ ����ü�� ����
	char ID[10];
	char PW[8];
}user;