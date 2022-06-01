#pragma once
typedef struct SCORE {
	//게임에서 필요한 변수를 구조체로 저장
	int strick; 
	int ball;
	int out;
	int count;
	int totalcount;
}score;

typedef struct USER {
	//게임에서 사용자 정보를 구조체에 저장
	char ID[5];
	char PW[4];
}user;