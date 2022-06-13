#include "myhear.h"
#include "myfunction.h"
#include "structure.h"
#include "count.h"

void outboard(score* s) {
	int x = 0, y = 0;
	int star[2] = { 6,16 };
	int count[COL][ROL] = {
		{0,0,0,1,1,1,0,0,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,1,1,1,1,1,1,1,0}
		,{0,0,1,1,1,1,1,0,0}
		,{0,0,0,1,1,1,0,0,0}
	};

	switch (s->out){
	case 1:
		for (int i = 0; i < s->out; i++) {
			y = OS;
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
						textcolor(ORED);
						printf("бс");
						textcolor(BAK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		for (int i = s->out; i < s->out + 1; i++) {
			y = OS;
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
						textcolor(RED);
						printf("бс");
						textcolor(BAK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		break;

	case 2:
		for (int i = 0; i < s->out; i++) {
			y = OS;
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
						textcolor(ORED);
						printf("бс");
						textcolor(BAK);
						break;

					}
					x++;
				}
				y++;
			}
		}
		break;

	default:
		for (int i = s->out; i < 2; i++) {
			y = OS;
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
						textcolor(RED);
						printf("бс");
						textcolor(BAK);
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