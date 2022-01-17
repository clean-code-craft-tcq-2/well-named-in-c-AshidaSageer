extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
extern int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
extern const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
extern const int MAX_COLORPAIR_NAME_CHARS = 16;
extern int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

extern typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
