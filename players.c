#include "myhear.h"
#include "myfunction.h"

void playersgame(void) {
	char** playersname = { malloc(sizeof(char*) * 2) };

	for (int i = 0; i < 2; i++) {
		playersname[i] =  malloc(sizeof(char) * 12);
	}
}