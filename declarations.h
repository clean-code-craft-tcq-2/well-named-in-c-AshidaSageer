extern enum MajorColor ;
extern enum MinorColor ;

extern const char* MajorColorNames[] ;
extern int numberOfMajorColors ;
extern const char* MinorColorNames[] ;
extern const int MAX_COLORPAIR_NAME_CHARS ;
extern int numberOfMinorColors ;

extern typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
