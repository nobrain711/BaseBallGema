#include "myhear.h"
#include "DB.h"

void insertscore(int s, char* n) {
	MYSQL mysql;
	MYSQL* connection = NULL;
	char query[255] = { 0 };
	// �ʱ�ȭ(������) : mysql_init()
	mysql_init(&mysql);

	//DB���� : mysql_connect(server, user, passwd, dbname, port, socket, flag)
	connection = mysql_real_connect(&mysql, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);
	
	//���� �Է�
	sprintf(query, "insert into score values" "('%s', '%d')", n, s);

	mysql_query(connection, query);

	mysql_close(connection);

	//DB���� ���� : mysql_close
	mysql_close(&mysql);
}