#include "ColorPair.h"

namespace TelCoColorCoder
{
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
}
