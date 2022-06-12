#include "ColorTypes.h"

namespace TelCoColorCoder
{
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
