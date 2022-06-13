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

	//Ȥ�� �� enterŰ ����
	getchar();
	
	//first���� �Ѿ�� ����Ʈ ���� c�� 2�� �ش� �Լ� ���
	if ((*c) == 2) {
		while(1) {
			//ȭ�� �ʱ�ȭ
			system("cls");
			linesdraw(0);
			gotoxy(10, 1);
			puts("�ڡ� ȸ�� ���� �١� ");
			gotoxy(7, 3);
			printf("���̵�(�ټ�����) : ");
			// Ű����� �Է� �޴´�
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			gotoxy(6, 5);
			printf("��й�ȣ(�� ����) : ");
			// Ű����� �Է� �޴´�
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "insert into user values" "('%s','%s')", u->ID, u->PW);

			query_stat = mysql_query(connection, query);

			if (query_stat == 0) { //ȸ������ ������ ���
				gotoxy(7, 8);
				puts("�ڡ� ȸ������ ���� �١�");
				Sleep(1000);
				mysql_close(connection);
				return;
			}
			else {
				gotoxy(8, 8);
				puts("���̵� �ߺ��Ǿ����ϴ�.");
				gotoxy(8, 9);
				puts("�ٽ� �Է��� �ּ���");
				Sleep(1000);
			}
		}
	}

	else {
		while (1) {
			system("cls");
			linesdraw(0);
			gotoxy(10, 1);
			puts("�ڡ�  �α���  �١� ");
			gotoxy(7, 3);
			printf("���̵�(�ټ�����) : ");
			// Ű����� �Է� �޴´�
			fgets(u->ID, 10, stdin);
			CHOP(u->ID);

			gotoxy(6, 5);
			printf("��й�ȣ(�� ����) : ");
			// Ű����� �Է� �޴´�
			fgets(u->PW, 8, stdin);
			CHOP(u->PW);

			sprintf(query, "select * from user where ID = '%s' and PW = '%s'", u->ID, u->PW);
			
			query_stat = mysql_query(connection, query);

			result = mysql_store_result(connection);

			while ((row = mysql_fetch_row(result)) != NULL) { //�α��� ������ ���
				gotoxy(8, 8);
				puts("�ڡ� �α��� ���� �١�");
				Sleep(1000);
				mysql_close(connection);
				return;
			}

			gotoxy(3, 8);
			puts("���̵��ϰ� ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
			gotoxy(11, 9);
			puts("�ٽ� �Է��� �ּ���");
			Sleep(1000);
		}
	}
}