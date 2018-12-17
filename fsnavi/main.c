#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "manager.h"


int main(int argc, char** argv)
{
	prepare();
	scan_dir("/");
	draw_panel();
	switch_panel();
	scan_dir("/");
	draw_panel();

	int k = 0;	// Код клавиши, получаемой от терминала

	do switch (k) {
		case KEY_UP:
			move_up(1);
			break;
		case KEY_DOWN:
			move_down(1);
			break;
		case KEY_END:
		case WCTRL('E'):

			break;
		case KEY_HOME:
		case WCTRL('H'):

			break;
		case KEY_NPAGE:
		case KEY_RIGHT:
			move_down(max_lines());
			break;
		case KEY_PPAGE:
		case KEY_LEFT:
			move_up(max_lines());
			break;
		case '\n':
			change_dir();
			break;
		case '\t':
			switch_panel();
			break;
		case KEY_RESIZE:
			draw_panel();
			switch_panel();
			draw_panel();
			switch_panel();
			break;
	} while ((k = get_key()));

	clean_up();
    return 0;
}
