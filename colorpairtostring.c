#include <stdio.h>
#include "declarations.h"
#include "colorpairtostring.h"

void ColorPairToString( ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}
