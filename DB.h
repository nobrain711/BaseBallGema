#pragma once
#pragma comment(lib, "libmysql.lib")	//��Ŀ���� �����ϸ� �� �ڵ带 ���ص� �ǰ� �Ѵ� �ϸ� ������ ����
#define USER "root"						//DB ���̵�
#define PASSWD "abc123"					//DB ��й�ȣ
#define PORT 3307						//DB�� ������ ��Ʈ��ȣ
#define DBNAME "gamescores"				//DB�� ������ ���̽� �̸�
#define DBHOST	"127.0.0.1"				//DB ip�ּ�
#define CHOP(x) x[strlen(x) - 1]= ' '	//C�� ���ڿ� ���� ������ �ڵ����� �Ǿ �����ϴ� ������ ���