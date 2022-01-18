#include <stdio.h>
//#include <assert.h>
#include "declarations.h"
#include "colorpairtostring.h"
#include "testNumberToPair.h"
#include "GetColorFromPairNumber.h"

void printManual(void)
{
 ColorPair color ;
 char colorPairString[MAX_COLORPAIR_NAME_CHARS];
  for (int pair =0; pair <= 25; pair++)
    {
     color = GetColorFromPairNumber(pair);
     ColorPairToString(&colorPair, colorPairString);
     printf("Got pair %s\n", colorPairNames);


void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
