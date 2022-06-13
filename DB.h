#pragma once
#pragma comment(lib, "libmysql.lib")	//링커에서 설정하면 이 코드를 안해도 되고 둘다 하면 안전성 보장
#define USER "root"						//DB 아이디
#define PASSWD "abc123"					//DB 비밀번호
#define PORT 3307						//DB가 소유한 포트번호
#define DBNAME "gamescores"				//DB에 데이터 베이스 이름
#define DBHOST	"127.0.0.1"				//DB ip주소
#define CHOP(x) x[strlen(x) - 1]= ' '	//C는 문자열 끝에 공백을 자동생성 되어서 제거하는 목적의 상수