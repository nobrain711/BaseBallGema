#include "myhear.h"
#include "DB.h"

void insertID(void) {
	// mysql ����ü ���� ����
	MYSQL* connection = NULL;	//����Ʈ ����
	MYSQL conn = { 0 };			//�Ϲ� ����
	MYSQL_RES* result = NULL;	//��� �� �ӽ� ����
	MYSQL_ROW row = { 0 };		//��� �� ����

	// C���� DB�Էº���
	char id[6] = { 0 };
	char passwd[6] = { 0 };;
	char query[255] = { 0 };

	mysql_init(&conn);	//DB���� �غ�

	connection = mysql_real_connect(&conn, DBHOST, USER, PASSWD, DBNAME, PORT, (char*)NULL, 0);	//DB����

	if (connection == NULL) {	//DB������ �������� ���� ���
		fprintf(stderr, "error : %s", mysql_error(&conn));
	}

	while (1){
		printf("���̵�(�ټ� ����) : ");
		fgets(id, 6, stdin);
		CHOP(id);

		sprintf(query, "select * from user where ID = '%s'", id);

		mysql_query(connection, query);

		result = mysql_store_result(connection);

		row = mysql_fetch_row(result);
		
		if (strcmp(row[0],id)!=0) {
			system("cls");
			puts("���̵� �ߺ��Ǿ �ٽ��Է����ּ���.");
		}
		else {
			printf("���̵�(�� ����) : ");
			fgets(passwd, 6, stdin);
			CHOP(passwd);


			break;
		}
		
	}
	

	mysql_close(connection);
}