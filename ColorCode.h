#include <string>

namespace TelCoColorCoder
{
   class ColorCode
   {
      public:
         typedef enum
         {
            ColorCodePair__UNKNOWN = 0,
            ColorCodePair__WHITE_BLUE,
            ColorCodePair__WHITE_ORANGE,
            ColorCodePair__WHITE_GREEN,
            ColorCodePair__WHITE_BROWN,
            ColorCodePair__WHITE_SLATE,
            ColorCodePair__RED_BLUE,
            ColorCodePair__RED_ORANGE,
            ColorCodePair__RED_GREEN,
            ColorCodePair__RED_BROWN,
            ColorCodePair__RED_SLATE,
            ColorCodePair__BLACK_BLUE,
            ColorCodePair__BLACK_ORANGE,
            ColorCodePair__BLACK_GREEN,
            ColorCodePair__BLACK_BROWN,
            ColorCodePair__BLACK_SLATE,
            ColorCodePair__YELLOW_BLUE,
            ColorCodePair__YELLOW_ORANGE,
            ColorCodePair__YELLOW_GREEN,
            ColorCodePair__YELLOW_BROWN,
            ColorCodePair__YELLOW_SLATE,
            ColorCodePair__VIOLET_BLUE,
            ColorCodePair__VIOLET_ORANGE,
            ColorCodePair__VIOLET_GREEN,
            ColorCodePair__VIOLET_BROWN,
            ColorCodePair__VIOLET_SLATE
         } ColorCodePair;
 
         ColorCode() {}
         inline std::string MapColorCodePairToPairNumber(ColorCodePair colorCodePair);
   };
}
