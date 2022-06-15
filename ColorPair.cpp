#include "ColorPair.h"

#define MAJORCOLORELEMENT 5
#define MINORCOLORELEMENT 5

namespace TelCoColorCoder
{
    static const char* MajorColorNames[MAJORCOLORELEMENT] = { "White", "Red", "Black", "Yellow", "Violet" };
    static int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    static const char* MinorColorNames[MINORCOLORELEMENT] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    static int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor)
    {
    }

    std::string ColorPair::ToString()
    {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
}

