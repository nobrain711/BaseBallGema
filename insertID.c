#include "myhear.h"
#include "DB.h"

void insertID(void) {
	// mysql 구조체 변수 설정
	MYSQL* connection = NULL;	//포인트 변수
	MYSQL conn = { 0 };			//일반 변수
	MYSQL_RES* result = NULL;	//결과 값 임시 저장
	MYSQL_ROW row = { 0 };		//결과 값 저장

	// C언어에서 DB입력변수
	char id[6] = { 0 };
	char passwd[6] = { 0 };;
	char query[255] = { 0 };

	mysql_init(&conn);	//DB연동 준비

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);	//DB연동

	if (connection == NULL) {	//DB연동시 오류나면 오류 출력
		fprintf(stderr, "error : %s", mysql_error(&conn));
	}

	while (1){
		printf("아이디(다섯 글자) : ");
		fgets(id, 6, stdin);
		CHOP(id);

		sprintf(query, "select * from user where ID = '%s'", id);

		mysql_query(connection, query);

		result = mysql_store_result(connection);

		row = mysql_fetch_row(result);
		
		if (strcmp(row[0],id)!=0) {
			system("cls");
			puts("아이디가 중복되어서 다시입력해주세요.");
		}
		else {
			printf("아이디(네 글자) : ");
			fgets(passwd, 6, stdin);
			CHOP(passwd);


			break;
		}
		
	}
	

	mysql_close(connection);
}