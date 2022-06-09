#include "DB.h"
#include "myhear.h"
#include "myfunction.h"

void ranking(void) {
	//DB연동 준비
	// mysql 구조체 변수 설정
	MYSQL* connection = NULL;	//포인트 변수
	MYSQL conn = { 0 };			//일반 변수
	MYSQL_RES* result = NULL;	//결과 값 임시 저장
	MYSQL_ROW row = { 0 };		//결과 값 저장

	char query[255] = { 0 };

	mysql_init(&conn);

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);

	sprintf(query, "SELECT	id, score FROM scores ORDER BY score");

	mysql_query(connection, query);

	result = mysql_store_result(connection);

	system("cls");

	while ((row = mysql_fetch_row(result)) != NULL) {
		printf("%s  %s  \n", row[0], row[1]);
	}

	system("pause");

	mysql_free_result(result);

	mysql_close(&conn);
}