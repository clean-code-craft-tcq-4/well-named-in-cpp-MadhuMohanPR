#include <iostream>
#include <assert.h>

#define MAJORCOLORSIZE 5
#define MINORCOLORSIZE 5

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[MAJORCOLORSIZE] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* MinorColorNames[MAJORCOLORSIZE] = { "Blue", "Orange", "Green", "Brown", "Slate" };

    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);  
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

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
