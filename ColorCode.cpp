#include "ColorCode.h"

namespace TelCoColorCoder
{
   std::string ColorCode::MapColorCodePairToPairNumber(ColorCodePair colorCodePair)
   {
      switch (colorCodePair)
      {
         case ColorCodePair__WHITE_BLUE:     return("ColorCodePair__WHITE_BLUE");
         case ColorCodePair__WHITE_ORANGE:   return("ColorCodePair__WHITE_ORANGE");
         case ColorCodePair__WHITE_GREEN:    return("ColorCodePair__WHITE_GREEN");
         case ColorCodePair__WHITE_BROWN:    return("ColorCodePair__WHITE_BROWN");
         case ColorCodePair__WHITE_SLATE:    return("ColorCodePair__WHITE_SLATE");

         case ColorCodePair__RED_BLUE:       return("ColorCodePair__RED_BLUE");
         case ColorCodePair__RED_ORANGE:     return("ColorCodePair__RED_ORANGE");
         case ColorCodePair__RED_GREEN:      return("ColorCodePair__RED_GREEN");
         case ColorCodePair__RED_BROWN:      return("ColorCodePair__RED_BROWN");
         case ColorCodePair__RED_SLATE:      return("ColorCodePair__RED_SLATE");

         case ColorCodePair__BLACK_BLUE:     return("ColorCodePair__BLACK_BLUE");
         case ColorCodePair__BLACK_ORANGE:   return("ColorCodePair__BLACK_ORANGE");
         case ColorCodePair__BLACK_GREEN:    return("ColorCodePair__BLACK_GREEN");
         case ColorCodePair__BLACK_BROWN:    return("ColorCodePair__BLACK_BROWN");
         case ColorCodePair__BLACK_SLATE:    return("ColorCodePair__BLACK_SLATE");

         case ColorCodePair__YELLOW_BLUE:    return("ColorCodePair__YELLOW_BLUE");
         case ColorCodePair__YELLOW_ORANGE:  return("ColorCodePair__YELLOW_ORANGE");
         case ColorCodePair__YELLOW_GREEN:   return("ColorCodePair__YELLOW_GREEN");
         case ColorCodePair__YELLOW_BROWN:   return("ColorCodePair__YELLOW_BROWN");
         case ColorCodePair__YELLOW_SLATE:   return("ColorCodePair__YELLOW_SLATE");

         case ColorCodePair__VIOLET_BLUE:    return("ColorCodePair__VIOLET_BLUE");
         case ColorCodePair__VIOLET_ORANGE:  return("ColorCodePair__VIOLET_ORANGE");
         case ColorCodePair__VIOLET_GREEN:   return("ColorCodePair__VIOLET_GREEN");
         case ColorCodePair__VIOLET_BROWN:   return("ColorCodePair__VIOLET_BROWN");
         case ColorCodePair__VIOLET_SLATE:   return("ColorCodePair__VIOLET_SLATE");

         default:        return("ColorCodePair__UNKNOWN");
      }
   }
}
