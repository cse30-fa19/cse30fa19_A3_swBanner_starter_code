#include "globals.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// readFontDB( ... )
//
int readFontDB(const char *fontFile){

  FILE *fontFP;

  char tmpbuf[MAXFONTLINE];
  char *endPtr = fontDB;
  char *startPtr = fontDB;

  int charLookupIdx = 0;

  if ((fontFP = fopen(fontFile, "r")) == NULL){
    return -1;
  }

  while (fgets(tmpbuf, MAXFONTLINE, fontFP) != NULL){
    strcpy(endPtr, tmpbuf);
    endPtr = endPtr + strlen(tmpbuf);
    if (tmpbuf[0] == FONTDELIM){
      /*TODO (if you plan to use this function):
          fill in the appropriate line(s) to fill in elements of charLookUp*/
      startPtr = endPtr;
    }
  }
  fclose(fontFP);
  return 0;
}
