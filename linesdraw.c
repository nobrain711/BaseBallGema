#include "myhear.h"

void linesdraw(int c) {
	switch (c){

	case 1:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 숫자 야구 게임 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1. 로  그  인            ┃");
		puts("┃                                   ┃");
		puts("┃          2. 회원  가입            ┃");
		puts("┃                                   ┃");
		puts("┃          3. 종      료            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;

	case 2:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 숫자 야구 게임 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1. 게임  시작            ┃");
		puts("┃                                   ┃");
		puts("┃          2. 점  수  판            ┃");
		puts("┃                                   ┃");
		puts("┃          3. 종      료            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;

	case 3:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ 숫자 야구 게임 ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃          1. 3아웃 조회            ┃");
		puts("┃                                   ┃");
		puts("┃          2. 1아웃 조회            ┃");
		puts("┃                                   ┃");
		puts("┃          3. 뒤로  가기            ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;

	case 4:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃                                       ┃");
		puts("┃                                       ┃");
		puts("┃                                       ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;
	
	case 5:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆ score  ranking ☆★      ┃");
		puts("┃                                   ┃");
		puts("┃     rank      id       score      ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;

	default:
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┃                                   ┃");
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		break;
	}
	
}