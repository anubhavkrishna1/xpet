#include <stdlib.h>
#include <stdio.h>

#include <X11/Xlib.h>

#include "xpet.h"

void setup(void);

Display* dpy = NULL;
Window root;

int scr;
int scr_width;
int scr_height;
int revert_to;

Bool running = False;

void setup(void)
{
	dpy = XOpenDisplay(NULL);
	if (!dpy) {
		fprintf(stderr, "xpet: failed to open display\n");
		exit(EXIT_FAILURE);
	}

	scr = XDefaultScreen(dpy);
	scr_width = XDisplayWidth(dpy, scr);
	scr_height = XDisplayHeight(dpy, scr);
	root = RootWindow(dpy, scr);
}

int main(int argc, char** argv)
{
	(void) argv;
	if (argc > 1) {
		printf(
			"xpets "VERSION"\r\n"
			"uint 2025"
		);
	}

	setup();
	return EXIT_SUCCESS;
}
