#pragma once
#pragma comment(lib, "libmysql.lib") //��Ŀ���� �����ϸ� �� �ڵ带 ���ص� �ǰ� �Ѵ� �ϸ� ������ ����
#define USER "root"
#define PASSWD "abc123"
#define PORT 3307
#define DBNAME "gamescores"
#define DBHOST	"127.0.0.1"
#define CHOP(x) x[strlen(x) - 1]= ' '