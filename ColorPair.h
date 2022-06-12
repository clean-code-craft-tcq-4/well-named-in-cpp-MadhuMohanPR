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

    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
