#include "graphics.h"

#pragma comment(lib, "graphics.lib")

int main()
{
	initwindow(900, 600, "install_graphics_h");
	
	line(150, 150, 450, 150);

	getch();

	closegraph();

	return 0;
}