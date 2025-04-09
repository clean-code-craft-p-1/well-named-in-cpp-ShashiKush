#include <iostream>
#include <assert.h>
#include <string>
#include "main.h"

ColorPair Main::GetColorFromPairNumber(int pairNumber)
{
    int zeroBasedPairNumber = pairNumber - 1;
    ColorPairHeader::MajorColor majorColor = 
        (ColorPairHeader::MajorColor)(zeroBasedPairNumber / ColorPairHeader::numberOfMinorColors);
    ColorPairHeader::MinorColor minorColor =
        (ColorPairHeader::MinorColor)(zeroBasedPairNumber % ColorPairHeader::numberOfMinorColors);
    ColorPair colorPair = ColorPair(majorColor, minorColor);
    return colorPair;
}

int Main::GetPairNumberFromColor(ColorPairHeader::MajorColor major, ColorPairHeader::MinorColor minor)
{
    return static_cast<int>(major) * ColorPairHeader::numberOfMinorColors + static_cast<int>(minor) + 1;
}

int main() {
    int pairNumber = 1;
    ColorPair colorPair = Main::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;

    int calculatePairNumber = Main::GetPairNumberFromColor(ColorPairHeader::MajorColor::BLACK, ColorPairHeader::MinorColor::ORANGE);
    std::cout << "Got pair number " << calculatePairNumber << std::endl;
    
    return 0;
};
