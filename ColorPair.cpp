#include "ColorPair.h"

namespace TelCoColorCoder
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major),
          minorColor(minor),
          MajorColorNames{ "White", "Red", "Black", "Yellow", "Violet" },
          MinorColorNames{ "Blue", "Orange", "Green", "Brown", "Slate" }
    {
        numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
        numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
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
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / TelCoColorCoder::ColorPair::numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % TelCoColorCoder::ColorPair::numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * TelCoColorCoder::ColorPair::numberOfMinorColors + minor + 1;
    }
}
