#pragma once
#include "s00nya_defs.h"

#define MAX_KEYS		121
#define MAX_BUTTONS		8

namespace s00nya
{

	// Keys are all supported keyboard keys
	enum class S00NYA_API Keys : Integer
	{
		UNKNOWN = -1,

		SPACE =			32,
		APOSTROPHE =	39,		// '
		COMMA =			44,		// ,
		MINUS =			45,		// -
		PERIOD =		46,		// .
		SLASH =			47,		// /

		NUM_0 = 48,
		NUM_1 = 49,
		NUM_2 = 50,
		NUM_3 = 51,
		NUM_4 = 52,
		NUM_5 = 53,
		NUM_6 = 54,
		NUM_7 = 55,
		NUM_8 = 56,
		NUM_9 = 57,

		SEMICOLON = 59,		// ;
		EQUAL =		61,		// =

		KEY_A = 65,
		KEY_B = 66,
		KEY_C = 67,
		KEY_D = 68,
		KEY_E = 69,
		KEY_F = 70,
		KEY_G = 71,
		KEY_H = 72,
		KEY_I = 73,
		KEY_J = 74,
		KEY_K = 75,
		KEY_L = 76,
		KEY_M = 77,
		KEY_N = 78,
		KEY_O = 79,
		KEY_P = 80,
		KEY_Q = 81,
		KEY_R = 82,
		KEY_S = 83,
		KEY_T = 84,
		KEY_U = 85,
		KEY_V = 86,
		KEY_W = 87,
		KEY_X = 88,
		KEY_Y = 89,
		KEY_Z = 90,

		LEFT_BRACKET =	91,		/* [ */
		BACKSLASH =		92,		/* \ */
		RIGHT_BRACKET = 93,		/* ] */
		GRAVE_ACCENT =	96,		/* ` */
		WORLD_1 =		161,	/* non-US #1 */
		WORLD_2 =		162,	/* non-US #2 */
		ESCAPE =		256,
		ENTER =			257,
		TAB =			258,
		BACKSPACE =		259,
		INSERT =		260,
		DELETE =		261,

		DIRECTIONAL_RIGHT = 262,
		DIRECTIONAL_LEFT =	263,
		DIRECTIONAL_DOWN =	264,
		DIRECTIONAL_UP =	265,

		PAGE_UP =		266,
		PAGE_DOWN =		267,
		HOME =			268,
		END =			269,
		CAPS_LOCK =		280,
		SCROLL_LOCK =	281,
		NUM_LOCK =		282,
		PRINT_SCREEN =	283,
		PAUSE =			284,

		F1 =	290,
		F2 =	291,
		F3 =	292,
		F4 =	293,
		F5 =	294,
		F6 =	295,
		F7 =	296,
		F8 =	297,
		F9 =	298,
		F10 =	299,
		F11 =	300,
		F12 =	301,
		F13 =	302,
		F14 =	303,
		F15 =	304,
		F16 =	305,
		F17 =	306,
		F18 =	307,
		F19 =	308,
		F20 =	309,
		F21 =	310,
		F22 =	311,
		F23 =	312,
		F24 =	313,
		F25 =	314,

		NUM_PAD_0 = 320,
		NUM_PAD_1 = 321,
		NUM_PAD_2 = 322,
		NUM_PAD_3 = 323,
		NUM_PAD_4 = 324,
		NUM_PAD_5 = 325,
		NUM_PAD_6 = 326,
		NUM_PAD_7 = 327,
		NUM_PAD_8 = 328,
		NUM_PAD_9 = 329,

		NUM_PAD_DECIMAL =		330,
		NUM_PAD_DIVIDE =		331,
		NUM_PAD_MULTIPLY =		332,
		NUM_PAD_SUBTRACT =		333,
		NUM_PAD_ADD =			334,
		NUM_PAD_ENTER =			335,
		NUM_PAD_EQUAL =			336,
		LEFT_SHIFT =			340,
		LEFT_CONTROL =			341,
		LEFT_ALT =				342,
		LEFT_SUPER =			343,
		RIGHT_SHIFT =			344,
		RIGHT_CONTROL =			345,
		RIGHT_ALT =				346,
		RIGHT_SUPER =			347,
		MENU =					348
	};

	// Buttons are all supported mouse buttons
	enum class Buttons : Integer
	{
		MOUSE_LEFT_CLICK =		0,
		MOUSE_RIGHT_CLICK =		1,
		MOUSE_MIDDLE_CLICK =	2,

		MOUSE_BUTTON_1 = 3,
		MOUSE_BUTTON_2 = 4,
		MOUSE_BUTTON_3 = 5,
		MOUSE_BUTTON_4 = 6,
		MOUSE_BUTTON_5 = 7
	};

}