#include "myhear.h"

void compmakenum(int* n1, int* n2, int* n3) {
	srand(time(NULL));//숫자 중복을 방지하고자 time을 null로 초기화 해준다

	do {
		(*n1) = rand() % 9 + 1;//rand()를 9로 나눈 나머지에 1을 더하는 이유는 필요한 숫자가 0~8이 아니라 1~9여서 1씩 증가해준다
		(*n2) = rand() % 9 + 1;
		(*n3) = rand() % 9 + 1;
	} while ((*n1) == (*n2) || (*n2) == (*n3) || (*n3) == (*n1));//n1,n2,n3가 같은 숫자가 아닐때 까지 반복해준다
}