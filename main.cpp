#include "TestColorCoder.h"
#include "ColorCode.h"

int main()
{
    TelCoColorCoder::ColorPair colorPair;
    TelCoColorCoder::ColorCode colorCode;
    std::cout << "Color Code Pair : " << colorCode.MapColorCodePairToPairNumber(colorCode.ColorCodePair__BLACK_SLATE) << std::endl;
    std::cout << "Color Code Pair : " << colorCode.MapColorCodePairToPairNumber(colorCode.ColorCodePair__WHITE_BROWN) << std::endl;

    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
