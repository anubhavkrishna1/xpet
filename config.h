#pragma once

#include <X11/Xutil.h>

#include "xpet.h"

#define PET_SMOOTH     200    /* smoothening factor for window movement */
#define PET_REFRESH    32     /* ms between movement updates (16ms=60fps) */
#define FRAME_DURATION 100    /* ms between frames */

struct bind bindings[] = {
	{.sym = XK_f, .mask = Mod1Mask},      /* call */
	{.sym = XK_q, .mask = Mod1Mask},      /* quit */
};

struct animation animations[] = {
	[HAPPY] = {
		.name = "happy",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[TALKING] = {
		.name = "talking",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[SLEEPING] = {
		.name = "sleeping",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[IDLE] = {
		.name = "idle",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[N] = {
		.name = "walk_north",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[S] = {
		.name = "walk_south",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[E] = {
		.name = "walk_east",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[W] = {
		.name = "walk_west",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[NW] = {
		.name = "walk_northwest",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[NE] = {
		.name = "walk_northeast",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[SW] = {
		.name = "walk_southwest",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},

	[SE] = {
		.name = "walk_southeast",
		.n_frames = 1,
		.loop = True,
		.frames = NULL,
	},
};