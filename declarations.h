#ifndef DECLARATIONS_DOT_H
#define DECLARATIONS_DOT_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[] ;
extern int numberOfMajorColors ;
extern const char* MinorColorNames[] ;
extern const int MAX_COLORPAIR_NAME_CHARS ;
extern int numberOfMinorColors ;

 typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif
