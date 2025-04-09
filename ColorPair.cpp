#include "ColorPair.h"
#include <iostream>

using namespace std;

ColorPair::ColorPair(ColorPairHeader::MajorColor major, ColorPairHeader::MinorColor minor)
{
    majorColor = major;
    minorColor = minor;
}

ColorPairHeader::MajorColor ColorPair::getMajor()
{
    return this->majorColor;
}

ColorPairHeader::MinorColor ColorPair::getMinor() {
    return this->minorColor;
}

std::string ColorPair::ToString() {
    std::string colorPairStr = ColorPairHeader::MajorColorNames[ColorPair::getMajor()];
    colorPairStr += " ";
    colorPairStr += ColorPairHeader::MinorColorNames[ColorPair::minorColor];
    return colorPairStr;
}
