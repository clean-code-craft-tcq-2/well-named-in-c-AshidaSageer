#include <stdio.h>
#include "declarations.h"
#include "colorpairtostring.h"
#include "GetColorFromPairNumber.h"
#include "printManual.h"

void printManual(void)
{
 ColorPair color ;
 char colorPairString[MAX_COLORPAIR_NAME_CHARS];
  for (int pair =0; pair <= 25; pair++)
    {
     color = GetColorFromPairNumber(pair);
     ColorPairToString(&color, colorPairString);
     printf("Pair No:%d \t --> %s\n",pair, colorPairString)
    }
}
