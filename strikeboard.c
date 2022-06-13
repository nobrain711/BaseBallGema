#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

void strikeboard(score* s) {
	int x = 0, y = 1;
	int star[2] = { 6,16 };
	int count[COL][ROL] = {
		{0,0,0,1,1,1,0,0,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,0,0,1,1,1,0,0,0}
	};

	switch (s->strike) {
	case 1:
		for (int i = 0; i < s->strike; i++) {
			y = SS;
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
						textcolor(OYELLOW);
						printf("бс");
						textcolor(DARK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		for (int i = s->strike; i < s->strike + 1; i++) {
			y = SS;
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
						textcolor(YELLOW);
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
		for (int i = 0; i < s->strike; i++) {
			y = SS;
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
						textcolor(OYELLOW);
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
		for (int i = s->strike; i < 2; i++) {
			y = SS;
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
						textcolor(YELLOW);
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