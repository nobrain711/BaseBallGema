#include "myhear.h"
#include "structure.h"

void scoreboard(user* u, score* s) {
	system("mode con: cols=42 lines=12");

		puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
      printf("早     ≠≧   %s   score   ≧≠       早\n",u->ID);
		puts("早                                       早");
	  printf("早     ≠≧    癱掘 熱 : %2d    ≧≠      早\n", s->totalcount);
		puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		system("pause");

	
}