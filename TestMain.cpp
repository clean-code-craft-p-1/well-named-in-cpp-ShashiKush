#include <iostream>
#include <assert.h>
#include <string>
#include "Main.h"

void testNumberToPair(int pairNumber,
    ColorPairHeader::MajorColor expectedMajor,
    ColorPairHeader::MinorColor expectedMinor)
{
    ColorPair colorPair =
        Main::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    ColorPairHeader::MajorColor major,
    ColorPairHeader::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = Main::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, ColorPairHeader::MajorColor::WHITE, ColorPairHeader::MinorColor::BROWN);
    testNumberToPair(5, ColorPairHeader::MajorColor::WHITE, ColorPairHeader::MinorColor::SLATE);

    testPairToNumber(ColorPairHeader::MajorColor::BLACK, ColorPairHeader::MinorColor::ORANGE, 12);
    testPairToNumber(ColorPairHeader::MajorColor::VIOLET, ColorPairHeader::MinorColor::SLATE, 25);

    return 0;
}
