#include <stdio.h>
#include "declarations.h"
#include "colorpairtostring.h"
#include "GetColorFromPairNumber.h"
#include "printManual.h"

void printManual(void)
{
 ColorPair colorPair ;
 char colorPairName[MAX_COLORPAIR_NAME_CHARS]; 
 
 printf("Reference Manual\n");
 for (int pairNumber = 1; pairNumber <= 25; pairNumber ++)
    {
     colorPair = GetColorFromPairNumber(pairNumber);
     ColorPairToString(&colorPair, &colorPairName[0]);
     printf("Pair No:%d \t --> %s\n",pairNumber, colorPairName);
    }
}
