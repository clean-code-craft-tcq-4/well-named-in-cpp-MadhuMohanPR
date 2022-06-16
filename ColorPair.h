#include <string>

#define MAJORCOLORELEMENT 5
#define MINORCOLORELEMENT 5

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
            static int numberOfMajorColors;
            static int numberOfMinorColors;

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
