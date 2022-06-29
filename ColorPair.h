#include <iostream>
#include <assert.h>
#include <string>

#define MAJORCOLORELEMENT 5  //MAJORCOLORELEMENT defines number of Major Color
#define MINORCOLORELEMENT 5  //MINORCOLORELEMENT defines number of Minor Color

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    class ColorPair
    {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            const char* MajorColorNames[MAJORCOLORELEMENT];
            const char* MinorColorNames[MINORCOLORELEMENT];
            int numberOfMajorColors;
            int numberOfMinorColors;
            int pairNumber;
            ColorPair();
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
            void PrintReferenceManual(int numberOfMajorColors, int numberOfMinorColors, const char* MajorColorNames[MAJORCOLORELEMENT], const char* MinorColorNames[MINORCOLORELEMENT]);
    };
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
