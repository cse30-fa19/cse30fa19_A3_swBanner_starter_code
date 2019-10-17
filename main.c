
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

/*********** DO NOT edit these four lines ***********/
#include "globals.h"                                //
char fontDB[MAXFONT];                               //
char* charLookup[256];                              //
char outputBuffer[MAXHEIGHT][MAXWIDTH] = {{' '}};   //
/****************************************************/

// Optional fontDB.c functions suggested in the write up
extern int readFontDB(const char *);
extern void printCGram(const char);

// Optional buffer.c functions suggested in the write up
extern int copyCGram(const char, int);
extern void clearBuffer();
extern void printBuffer(int, int);

int main(int argc, char **argv){

  /*TODO: Complete main here*/

  return 0;
}
