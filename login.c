#include "myfunction.h"
#include "myhear.h"
#include "DB.h"
#include "structure.h"

void login(user* u, int* c ) {
	// mysql 구조체 변수 설정
	MYSQL* connection = NULL;	//포인트 변수
	MYSQL conn = { 0 };			//일반 변수
	MYSQL_RES* result = NULL;	//결과 값 임시 저장
	MYSQL_ROW row = { 0 };		//결과 값 저장

	// C언어에서 DB입력변수	
	char query[255] = { 0 };	//쿼리 문 임시 저장
	int query_stat = 0;			//쿼리 오류 여부

	mysql_init(&conn);	//DB연동 준비

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);	//DB연동

	if (connection == NULL) {	//DB연동시 오류나면 오류 출력
		fprintf(stderr, "error : %s", mysql_error(&conn));
	}

	if ((*c) == 2) {
		while(1) {
			printf("아이디(다섯글자) : ");
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			printf("비밀번호(네 글자) : ");
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "insert into login values" "('%s','%s')", u->ID, u->PW);

			query_stat = mysql_query(connection, query);

			if (query_stat == 0) {
				mysql_close(connection);
				return;
			}
			else {
				puts("아이디가 중복되었습니다.");
				puts("다시 입력해 주세요");
			}
		}
	}

	else {
		while (1) {
			printf("아이디(다섯글자) : ");
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			printf("비밀번호(네 글자) : ");
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "select * from user where ID = '%s' and PW = '%s'", u->ID, u->PW);
			
			query_stat = mysql_query(connection, query);

			if (query_stat != 0) {
				puts("아이디하고 비밀번호가 틀렸습니다.");
				puts("다시 입력해 주세요");;
			}
			
			result = mysql_store_result(connection);

			while ((row = mysql_fetch_row(result)) != NULL) {
				puts("로그인 성공");
				mysql_close(connection);
				return;
			}
		}
	}
}