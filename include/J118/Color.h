#pragma once
#include <stdint.h>

namespace J118
{

class Color
{
private:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
public:
    Color(uint8_t b, uint8_t g, uint8_t r);
    Color(uint16_t color);
    virtual ~Color();
    uint16_t getColor565();
    bool operator==(const Color& c);
    uint8_t getRed();
    uint8_t getGreen();
    uint8_t getBlue();
    Color(Color back,Color front, uint8_t alpha);// Blend Contructor

    static const Color Black;
    static const Color White;

};
}


