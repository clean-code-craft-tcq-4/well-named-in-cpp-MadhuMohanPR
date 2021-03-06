#include <stdlib.h>
#include "ColorPair.h"

namespace TelCoColorCoder
{
    ColorPair::ColorPair()
        : MajorColorNames{ "White", "Red", "Black", "Yellow", "Violet" },
          MinorColorNames{ "Blue", "Orange", "Green", "Brown", "Slate" },
          numberOfMajorColors(sizeof(MajorColorNames) / sizeof(MajorColorNames[0])),
          numberOfMinorColors(sizeof(MinorColorNames) / sizeof(MinorColorNames[0])),
          pairNumber(numberOfMajorColors * numberOfMinorColors)
    {
    }
    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major),
          minorColor(minor)
    {
    }
    void ColorPair::PrintReferenceManual()
    {
       int PairNumber = 0;
       for(int i =0; i < numberOfMajorColors; i++)
       {
          for(int j= 0; j < numberOfMinorColors;j++)
          {
             PairNumber++;
             std::cout << "Pair Number " << PairNumber;
             std::cout << "Major Color " << MajorColorNames[i];
             std::cout << "Minor Color " << MinorColorNames[j] << std::endl;
          }
       }
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
