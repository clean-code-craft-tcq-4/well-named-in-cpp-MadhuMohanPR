#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <iostream>
#include <cassert>
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
            std::string ToString()
            {
               std::string colorPairStr = MajorColorNames[majorColor];
               colorPairStr += " ";
               colorPairStr += MinorColorNames[minorColor];
               return colorPairStr;
            }
            void PrintReferenceManual();
    };
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif
