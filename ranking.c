#include "DB.h"
#include "myhear.h"
#include "myfunction.h"

void ranking(int choice) {
	//DB���� �غ�
	// mysql ����ü ���� ����
	MYSQL* connection = NULL;	//����Ʈ ����
	MYSQL conn = { 0 };			//�Ϲ� ����
	MYSQL_RES* result = NULL;	//��� �� �ӽ� ����
	MYSQL_ROW row = { 0 };		//��� �� ����

	char query[255] = { 0 };
	int lines = 0;
	int rank = 0;
	mysql_init(&conn);

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);

	if (choice == 1) {
		sprintf(query, "SELECT	id, TRIM(score) FROM scores ORDER BY score");

		mysql_query(connection, query);
	}

	else{
		sprintf(query, "SELECT	id, ROUND(SUM(score)/3,1) FROM scores GROUP BY id ORDER BY 2");

		mysql_query(connection, query);
	}
	result = mysql_store_result(connection);

	system("cls");
	linesdraw(5);

	while ((row = mysql_fetch_row(result)) != NULL) {
		rank++;
		lines++;
		if (rank != 12) {
			gotoxy(6, 4 + lines);
			printf("%3d     %4s      %5s", rank, row[0], row[1]);
		}
		else {
			gotoxy(8, 18);
			printf("�ƹ�Ű�� ������ ������.");
			getch();
			lines = 0;
			system("cls");
			linesdraw(5);
		}
	}

	gotoxy(8, 18);
	printf("�ƹ�Ű�� ���� �ּ���.");
	getch();

	mysql_free_result(result);

	mysql_close(&conn);
}