#include <avr/pgmspace.h>
#include "types.h"

#include "options.h"

byte PROGMEM key_matrix[][6] =
{
	{ 1, 0x74, 0x8, 0x1, 0xff, 0x0 }, 	// right		KEMPSTON ONLY
	{ 1, 0x6b, 0x8, 0x2, 0xff, 0x0 }, 	// left
	{ 1, 0x72, 0x8, 0x4, 0xff, 0x0 }, 	// down
	{ 1, 0x75, 0x8, 0x8, 0xff, 0x0 }, 	// up
	{ 0, 0x14, 0x8, 0x10, 0xff, 0x0 },  // ctrl

	//------------------------------------------------------

	{ 1, 0x74, 0x8, 0x1, 0x04, 0x08 }, 	// right		KEMPSTON + SINCLAIR
	{ 1, 0x6b, 0x8, 0x2, 0x04, 0x10 }, 	// left
	{ 1, 0x72, 0x8, 0x4, 0x04, 0x04 }, 	// down
	{ 1, 0x75, 0x8, 0x8, 0x04, 0x02 }, 	// up
	{ 0, 0x14, 0x8, 0x10, 0x04, 0x1 },  // ctrl

	//------------------------------------------------------

	{ 1, 0x14, 0x8, 0x20, 0xff, 0x0 },  // ctrl
	{ 1, 0x11, 0x8, 0x40, 0xff, 0x0 },  // alt
	{ 0, 0x11, 0x8, 0x80, 0xff, 0x0 },  // alt

	//------------------------------------------------------

	{ 0, 0x12, 0x0, 0x1,  0xff, 0x0 },	// shift
	{ 0, 0x1a, 0x0, 0x2,  0xff, 0x0 },
	{ 0, 0x22, 0x0, 0x4,  0xff, 0x0 },
	{ 0, 0x21, 0x0, 0x8,  0xff, 0x0 },
	{ 0, 0x2a, 0x0, 0x10, 0xff, 0x0 },

	{ 0, 0x1c, 0x1, 0x1,  0xff, 0x0 },
	{ 0, 0x1b, 0x1, 0x2,  0xff, 0x0 },
	{ 0, 0x23, 0x1, 0x4,  0xff, 0x0 },
	{ 0, 0x2b, 0x1, 0x8,  0xff, 0x0 },
	{ 0, 0x34, 0x1, 0x10, 0xff, 0x0 },

	{ 0, 0x15, 0x2, 0x1,  0xff, 0x0 },
	{ 0, 0x1d, 0x2, 0x2,  0xff, 0x0 },
	{ 0, 0x24, 0x2, 0x4,  0xff, 0x0 },
	{ 0, 0x2d, 0x2, 0x8,  0xff, 0x0 },
	{ 0, 0x2c, 0x2, 0x10, 0xff, 0x0 },

	{ 0, 0x16, 0x3, 0x1,  0xff, 0x0 },
	{ 0, 0x1e, 0x3, 0x2,  0xff, 0x0 },
	{ 0, 0x26, 0x3, 0x4,  0xff, 0x0 },
	{ 0, 0x25, 0x3, 0x8,  0xff, 0x0 },
	{ 0, 0x2e, 0x3, 0x10, 0xff, 0x0 },

	{ 0, 0x45, 0x4, 0x1,  0xff, 0x0 },
	{ 0, 0x46, 0x4, 0x2,  0xff, 0x0 },
	{ 0, 0x3e, 0x4, 0x4,  0xff, 0x0 },
	{ 0, 0x3d, 0x4, 0x8,  0xff, 0x0 },
	{ 0, 0x36, 0x4, 0x10, 0xff, 0x0 },

	{ 0, 0x4d, 0x5, 0x1,  0xff, 0x0 },
	{ 0, 0x44, 0x5, 0x2,  0xff, 0x0 },
	{ 0, 0x43, 0x5, 0x4,  0xff, 0x0 },
	{ 0, 0x3c, 0x5, 0x8,  0xff, 0x0 },
	{ 0, 0x35, 0x5, 0x10, 0xff, 0x0 },

	{ 0, 0x5a, 0x6, 0x1,  0xff, 0x0 },  // enter
	{ 0, 0x4b, 0x6, 0x2,  0xff, 0x0 },
	{ 0, 0x42, 0x6, 0x4,  0xff, 0x0 },
	{ 0, 0x3b, 0x6, 0x8,  0xff, 0x0 },
	{ 0, 0x33, 0x6, 0x10, 0xff, 0x0 },

	{ 0, 0x29, 0x7, 0x1,  0xff, 0x0 }, // space
	{ 0, 0x59, 0x7, 0x2,  0xff, 0x0 }, // shift
	{ 0, 0x3a, 0x7, 0x4,  0xff, 0x0 },
	{ 0, 0x31, 0x7, 0x8,  0xff, 0x0 },
	{ 0, 0x32, 0x7, 0x10, 0xff, 0x0 },

	{ 0, 0x66, 0x0, 0x1, 0x04, 0x1 },    // backspace

#if !EXT_KBD
	{ 0, 0x75, 0x0, 0x1, 0x04, 0x8 },  // up (8)
	{ 0, 0x72, 0x0, 0x1, 0x04, 0x10 }, // down (2)
	{ 0, 0x6b, 0x0, 0x1, 0x03, 0x10 }, // left (4)
	{ 0, 0x74, 0x0, 0x1, 0x04, 0x4 },  // right (6)
#else
	{ 1, 0x6C, 0x0, 0x1, 0x04, 0x8 },	// Home	-> Up
	{ 1, 0x69, 0x0, 0x1, 0x04, 0x10 },	// End	-> Down
	{ 1, 0x7D, 0x0, 0x1, 0x03, 0x10 },	// PgUp	-> Left
	{ 1, 0x7A, 0x0, 0x1, 0x04, 0x4 },	// PgDn	-> Right

	// Добавлено-----------------------------------------------
	{ 0, 0x4E, 0x7, 0x2, 0x6, 0x8 },	// "-" -> "-"
	{ 0, 0x55, 0x7, 0x2, 0x6, 0x4 },	// "+" -> "+"
	{ 0, 0x54, 0x7, 0x2, 0x0, 0x10 },	// "[" -> "/"
	{ 0, 0x5B, 0x7, 0x2, 0x7, 0x10 },	// "]" -> "*"
	{ 0, 0x4C, 0x7, 0x2, 0x5, 0x2 },	// ";" -> ";"
	{ 0, 0x52, 0x7, 0x2, 0x5, 0x1 },	// "'" -> """
	{ 0, 0x41, 0x7, 0x2, 0x7, 0x8 },	// "," -> ","
	{ 0, 0x49, 0x7, 0x2, 0x7, 0x4 },	// "." -> "."
	{ 0, 0x4A, 0x7, 0x2, 0x0, 0x2 },	// "/" -> ":"

	{ 0, 0x0E, 0x0, 0x1, 0x4, 0x2 },	// "`"		-> Graphics
	{ 0, 0x58, 0x0, 0x1, 0x3, 0x2 },	// CapsLock -> CapsLock
	{ 0, 0x0D, 0x0, 0x1, 0x3, 0x1 },	// Tab		-> Edit
	{ 0, 0x5D, 0x0, 0x1, 0x7, 0x2 },	// "\"		-> ExtMode
	{ 0, 0x76, 0x0, 0x1, 0x7, 0x1 },
#endif

	{ 0, 0x0, 0x0, 0x0, 0x0, 0x0 }
};
