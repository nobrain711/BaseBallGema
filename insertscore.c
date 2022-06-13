#include "myhear.h"
#include "DB.h"
#include "structure.h"

void insertscore(user* u, score* s) {
	//DB관련 변수
	MYSQL mysql;
	MYSQL* connection = NULL;
	char query[255] = { 0 };
	
	// 초기화(생성자) : mysql_init()
	mysql_init(&mysql);

	//DB연결 : mysql_connect(server, user, passwd, dbname, port, socket, flag)
	connection = mysql_real_connect(&mysql, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);
	
	//점수 입력
	sprintf(query, "insert into scores (id, score) values" "('%s',%d)", u->ID, s->totalcount);

	//mysql에 query연결
	mysql_query(connection, query);

	//연결 종료
	mysql_close(connection);

	//DB연결 종료 : mysql_close
	mysql_close(&mysql);
}