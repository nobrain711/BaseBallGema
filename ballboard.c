#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

void ballboard(score* s) {
	int x = 0, y = 0;
	int star[3] = { 1,11,21 };
	int count[COL][ROL] = {
		{0,0,0,1,1,1,0,0,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,0,0,1,1,1,0,0,0}
	};

	switch (s->ball) {
	case 1:
		for (int i = 0; i < s->ball; i++) {
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[i];
				for (int r = 0; r < ROL; r++) {
					switch (count[c][r]) {

					case 0:
						gotoxy(x, y);
						printf("  ");
						break;

					case 1:
						gotoxy(x, y);
						textcolor(OGREEN);
						printf("бс");
						textcolor(DARK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		for (int i = s->ball; i < s->ball + 1; i++) {
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[i];
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
		}
		break;

	case 2:
		for (int i = 0; i < s->ball; i++) {
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[i];
				for (int r = 0; r < ROL; r++) {
					switch (count[c][r]) {

					case 0:
						gotoxy(x, y);
						printf("  ");
						break;

					case 1:
						gotoxy(x, y);
						textcolor(OGREEN);
						printf("бс");
						textcolor(DARK);
						break;

					}
					x++;
				}
				y++;
			}
		}
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[2];
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
		break;
	case 3:
		for (int i = 0; i < s->ball; i++) {
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[i];
				for (int r = 0; r < ROL; r++) {
					switch (count[c][r]) {

					case 0:
						gotoxy(x, y);
						printf("  ");
						break;

					case 1:
						gotoxy(x, y);
						textcolor(OGREEN);
						printf("бс");
						textcolor(DARK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		break;

	default:
		for (int i = s->ball; i < 3; i++) {
			y = BS;
			for (int c = 0; c < COL; c++) {

				x = star[i];
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
		}
		break;
	}
}
