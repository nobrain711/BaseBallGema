#include "myhear.h"
#include "DB.h"
#include "structure.h"

void insertscore(user* u, score* s) {
	MYSQL mysql;
	MYSQL* connection = NULL;
	char query[255] = { 0 };
	// �ʱ�ȭ(������) : mysql_init()
	mysql_init(&mysql);

	//DB���� : mysql_connect(server, user, passwd, dbname, port, socket, flag)
	connection = mysql_real_connect(&mysql, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);
	
	//���� �Է�
	sprintf(query, "insert into scores (id, score) values" "('%s',%d)", u->ID, s->totalcount);

	mysql_query(connection, query);

	mysql_close(connection);

	//DB���� ���� : mysql_close
	mysql_close(&mysql);
}