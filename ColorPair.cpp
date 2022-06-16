#include "ColorPair.h"

namespace TelCoColorCoder
{
    ColorPair::ColorPair()
    {
        numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
        numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    }

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major),
          minorColor(minor),
          MajorColorNames{ "White", "Red", "Black", "Yellow", "Violet" },
          MinorColorNames{ "Blue", "Orange", "Green", "Brown", "Slate" }
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
        ColorPair colorPair;
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / colorPair.numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % colorPair.numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        ColorPair colorPair;
        return major * colorPair.numberOfMinorColors + minor + 1;
    }
}
