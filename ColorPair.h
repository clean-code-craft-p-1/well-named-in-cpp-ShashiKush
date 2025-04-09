#include <iostream>

namespace ColorPairHeader
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    
};

class ColorPair
{        
    public:
        ColorPair(ColorPairHeader::MajorColor major, ColorPairHeader::MinorColor minor);
        ColorPairHeader::MajorColor getMajor();
        ColorPairHeader::MinorColor getMinor();
        std::string ToString();
        ~ColorPair();
    
        ColorPairHeader::MajorColor majorColor;
        ColorPairHeader::MinorColor minorColor;
    private:
        ColorPair();
};
