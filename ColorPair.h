#include <iostream>
#include <assert.h>

#define MAJORCOLORSIZE 5
#define MINORCOLORSIZE 5

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[MAJORCOLORSIZE];
    const char* MinorColorNames[MAJORCOLORSIZE];

    int numberOfMajorColors;  
    int numberOfMinorColors;

    class ColorPair
    {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);

            MajorColor getMajor()
            {
                return majorColor;
            }
            MinorColor getMinor()
            {
                return minorColor;
            }
            
            std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}