//DO NOT edit this file

#ifndef _GLOBALS_H
#define _GLOBALS_H
#define MAXFONT 4*4096
#define MAXFONTLINE 32

#define MAXWIDTH 250
#define MAXHEIGHT 16
#define FONTDELIM '#'
#define SPACING 2
#define SMILEY ('~' + 1)

extern char fontDB[];
extern char* charLookup[];
extern char outputBuffer[MAXHEIGHT][MAXWIDTH];

#endif
