#include "DB.h"
#include "myhear.h"
#include "myfunction.h"

void ranking(void) {
	//DB���� �غ�
	// mysql ����ü ���� ����
	MYSQL* connection = NULL;	//����Ʈ ����
	MYSQL conn = { 0 };			//�Ϲ� ����
	MYSQL_RES* result = NULL;	//��� �� �ӽ� ����
	MYSQL_ROW row = { 0 };		//��� �� ����

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