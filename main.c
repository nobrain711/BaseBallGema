#include "myfunction.h"
#include "structure.h"
#include "DB.h"
#include "myhear.h"

int main(void) {
	int choice = 0;//입력 받을 숫자 생성
	user* u = malloc(sizeof(user));	//player 관련한 정보
	
	first(&choice);		//처음 접속시 로그인 및 회원가입 창으로 안내
	login(u, &choice);	//회원가입이나 로그인 창으로 전환

	while(1){
		menu(&choice);//meun로 넘겨 주고 숫자 choice의 주소도 넘겨줌
		
		switch (choice){//choice기점으로 선택
		case 1:
			playergame(u);//게임 실행
			break;
		
		case 2:
			scoreboradchoice(u);//점수 조회
			break;

		default:
			endscreen(u,NULL);//게임 종료 생성된 구조체 종료
		}
	}

	return 0;
}