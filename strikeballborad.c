#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

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

	y = 1;
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
				textcolor(GREEN);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}

	y = 1;
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
				textcolor(GREEN);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}

	y = 1;
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
				textcolor(GREEN);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}
	y = 8;
	for (int c = 0; c < COL; c++) {
		x = 15;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(YELLOW);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}
	y = 8;
	for (int c = 0; c < COL; c++) {
		x = 25;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(YELLOW);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}
	y = 15;
	for (int c = 0; c < COL; c++) {
		x = 15;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(RED);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}
	y = 15;
	for (int c = 0; c < COL; c++) {
		x = 25;
		for (int r = 0; r < ROL; r++) {
			switch (count[c][r]) {

			case 0:
				gotoxy(x, y);
				printf("  ");
				break;

			case 1:
				gotoxy(x, y);
				textcolor(RED);
				printf("бс");
				textcolor(DARK);
				break;

			}
			x++;
		}
		y++;
	}
}