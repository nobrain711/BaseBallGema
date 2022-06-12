#include "DB.h"
#include "myhear.h"
#include "myfunction.h"

void myranking(void) {
	//DB���� �غ�
	// mysql ����ü ���� ����
	MYSQL* connection = NULL;	//����Ʈ ����
	MYSQL conn = { 0 };			//�Ϲ� ����
	MYSQL_RES* result = NULL;	//��� �� �ӽ� ����
	MYSQL_ROW row = { 0 };		//��� �� ����

	char query[255] = { 0 };
	int i = 0;
	int r = 0;
	mysql_init(&conn);

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);

	sprintf(query, "SELECT	id, ROUND(SUM(score)/3,2) FROM scores GROUP BY id ORDER BY 2");

	mysql_query(connection, query);

	result = mysql_store_result(connection);

	system("cls");
	linesdraw(5);

		 while ((row = mysql_fetch_row(result)) != NULL) {
			 i++;
			 r++;
			 if (r != 12) {
				 gotoxy(6, 4 + i);
				 printf("%3d     %4s      %5s", i, row[0], row[1]);
			 }
			 else {
				 gotoxy(6, 4 + i);
				 getch();
				 r = 0;
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