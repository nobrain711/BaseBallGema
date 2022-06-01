#include "myhear.h"
#include "DB.h"

void insertscore(int s, char* n) {
	MYSQL mysql;
	MYSQL* connection = NULL;
	char query[255] = { 0 };
	// 초기화(생성자) : mysql_init()
	mysql_init(&mysql);

	//DB연결 : mysql_connect(server, user, passwd, dbname, port, socket, flag)
	connection = mysql_real_connect(&mysql, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);
	
	//점수 입력
	sprintf(query, "insert into score values" "('%s', '%d')", n, s);

	mysql_query(connection, query);

	mysql_close(connection);

	//DB연결 종료 : mysql_close
	mysql_close(&mysql);
}