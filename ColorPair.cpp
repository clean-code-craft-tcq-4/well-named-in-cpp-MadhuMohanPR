#include "ColorPair.h"

    TelCoColorCoder::MajorColorNames = { "White", "Red", "Black", "Yellow", "Violet" };
    TelCoColorCoder::MinorColorNames = { "Blue", "Orange", "Green", "Brown", "Slate" };

    TelCoColorCoder::numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);    
    TelCoColorCoder::numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    TelCoColorCoder::ColorPair::ColorPair(MajorColor major, MinorColor minor): majorColor(major), minorColor(minor)
    {
    }

    std::string TelCoColorCoder::ColorPair::ToString()
    {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int TelCoColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
