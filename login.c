#include "myfunction.h"
#include "myhear.h"
#include "DB.h"
#include "structure.h"

void login(user* u, int* c ) {
	// mysql ����ü ���� ����
	MYSQL* connection = NULL;	//����Ʈ ����
	MYSQL conn = { 0 };			//�Ϲ� ����
	MYSQL_RES* result = NULL;	//��� �� �ӽ� ����
	MYSQL_ROW row = { 0 };		//��� �� ����

	// C���� DB�Էº���	
	char query[255] = { 0 };	//���� �� �ӽ� ����
	int query_stat = 0;			//���� ���� ����

	mysql_init(&conn);	//DB���� �غ�

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);	//DB����

	if (connection == NULL) {	//DB������ �������� ���� ���
		fprintf(stderr, "error : %s", mysql_error(&conn));
	}

	getchar();
	
	if ((*c) == 2) {
		while(1) {
			system("cls");
			puts("\n\n\t�ڡ� ȸ�� ���� �١� ");
			printf("\n   ���̵�(�ټ�����) : ");
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			printf("\n   ��й�ȣ(�� ����) : ");
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "insert into user values" "('%s','%s')", u->ID, u->PW);

			query_stat = mysql_query(connection, query);

			if (query_stat == 0) {
				mysql_close(connection);
				return;
			}
			else {
				puts("\n\t���̵� �ߺ��Ǿ����ϴ�.");
				puts("\n\t�ٽ� �Է��� �ּ���");
				Sleep(1000);
			}
		}
	}

	else {
		while (1) {
			system("cls");
			puts("\n\n\t �ڡ�  �α���  �١� ");
			printf("\n   ���̵�(�ټ�����) : ");
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			printf("\n   ��й�ȣ(�� ����) : ");
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "select * from user where ID = '%s' and PW = '%s'", u->ID, u->PW);
			
			query_stat = mysql_query(connection, query);

			result = mysql_store_result(connection);

			while ((row = mysql_fetch_row(result)) != NULL) {
				puts("\n\t�α��� ����");
				Sleep(1000);
				mysql_close(connection);
				return;
			}

			puts("\n  ���̵��ϰ� ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
			puts("\n\t�ٽ� �Է��� �ּ���");
			Sleep(1000);
		}
	}
}