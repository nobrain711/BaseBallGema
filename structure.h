#pragma once
typedef struct SCORE {
	//���ӿ��� �ʿ��� ������ ����ü�� ����
	int strick; 
	int ball;
	int out;
	int count;
	int totalcount;
}score;

typedef struct USER {
	//���ӿ��� ����� ������ ����ü�� ����
	char ID[5];
	char PW[4];
}user;