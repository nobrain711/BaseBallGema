#include "myhear.h"
#include "myfunction.h"
#define SCOUNT = 2
#define BCOUNT = 3
#define OCOUNT = 3
#define COL 6
#define ROL 9

void strikeballborad(void) {
	int count[COL][ROL] = {
		{0,0,0,1,1,1,0,0,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,0,0,1,1,1,0,0,0}
	};
	int x = 0, y = 0;

	y = 8;
	for (int c = 0; c < COL; c++) {
		x = 10;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;
			
			case 1:
				gotoxy(x, y);
				textcolor(2);
				printf("бс");
				textcolor(15);
				break;

			}
			x++;
		}
		y++;
	}
	
	y = 8;
	for (int c = 0; c < COL; c++) {
		x = 20;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(2);
				printf("бс");
				textcolor(15);
				break;

			}
			x++;
		}
		y++;
		}
	
	y = 8;
	for (int c = 0; c < COL; c++) {
		x = 30;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(2);
				printf("бс");
				textcolor(15);
				break;

			}
			x++;
		}
		y++;
		}
	}