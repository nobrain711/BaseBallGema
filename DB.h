#pragma once
#pragma comment(lib, "libmysql.lib") //링커에서 설정하면 이 코드를 안해도 되고 둘다 하면 안전성 보장
#define USER "root"
#define PASSWD "abc123"
#define PORT 3307
#define DBNAME "gamescores"
#define DBHOST	"127.0.0.1"
#define CHOP(x) x[strlen(x) - 1]= ' '