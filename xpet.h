#pragma once

#include <X11/Xlib.h>

#define VERSION "v0.1"

enum state {
	SLEEPING, IDLE,
	N, S, E, W,
	NW, NE, SW, SE,
	TALKING, HAPPY,
	STATE_LAST
};

struct animation {
	struct frame* frames;
	const char* name;
	int    n_frames;
	Bool   loop;
};

struct bind {
	KeySym sym;
	unsigned long mask;
};

struct frame {
	Pixmap pix;
	Pixmap mask;
	int duration;
};

struct mouse {
	int    x;
	int    y;
};

struct pet {
	Window window;
	Bool   chasing;
	Bool   frozen;
	enum state state;
	char*  name;
	char*  message;
	int    x;
	int    y;

	struct animation* current_animation;
	int    current_frame;
	long   frame_time;
};
