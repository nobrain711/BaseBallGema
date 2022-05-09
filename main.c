#include "myfunction.h"

int main(void) {
	int choice = 0;//입력 받을 숫자 생성

	while(1){
		menu(&choice);//meun로 넘겨 주고 숫자 choice의 주소도 넘겨줌
		
		switch (choice){//choice기점으로 선택
		case 1:
			playerchoice();//게임 실행
			break;
		
		case 2:
			scoreboradchoice();//점수 조회
			break;

		default:
			endscreen();//게임 종료
		}
	}
	//strikeballborad();
	return 0;
}