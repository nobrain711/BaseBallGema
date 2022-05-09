#include "myhear.h"

void scoreboard(int count, char* player) {
	system("mode con: cols=42 lines=12");
	if (player == NULL) {
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		puts("┃     ★☆   player   score   ☆★      ┃");
		puts("┃                                       ┃");
	  printf("┃     ★☆    투구 수 : %2d    ☆★      ┃\n", count);
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		system("pause");
	}
	else {
		puts("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
		printf("┃     ★☆    %s     sorce   ☆★     ┃\n", player);
		puts("┃                                       ┃");
		printf("┃     ★☆    투구 수 : %d     ☆★     ┃\n", count);
		puts("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
		system("pause");
	}
}