#include "J118/Color.h"
namespace J118
{
    


Color::Color(uint8_t r, uint8_t g, uint8_t b)
{
    red = r;
    green = g;
    blue = b;
}

Color::Color(uint16_t color)
{
    blue = (color & 0b1111100000000000) >> 8;
    green = (color & 0b0000011111100000) >> 3;
    red = (color & 0b0000000000011111) << 3;
    if(red != 0) red |= 0b00000111;
    if(green != 0) green |= 0b00000011;
    if(blue != 0) blue |= 0b00000111;
}



Color::Color(Color back,Color front, uint8_t alpha)
{
    unsigned int inv_alpha = 256 - alpha;
    red = (uint8_t)(((int)back.getRed()*inv_alpha + (int)front.getRed()*alpha)>>8);
    green = (uint8_t)(((int)back.getGreen()*inv_alpha + (int)front.getGreen()*alpha)>>8);
    blue = (uint8_t)(((int)back.getBlue()*inv_alpha + (int)front.getBlue()*alpha)>>8);
}

Color::~Color()
{

}

uint16_t Color::getColor565()
{
    uint16_t combined_color;
    uint16_t red_masked = red >> 3;
    uint16_t green_masked = (green >> 2) << 5;
    uint16_t blue_masked = (blue >> 3) << 11;
    return red_masked | green_masked | blue_masked;
}

bool Color::operator==(const Color& c)
{
    if(c.red != red || c.green != green || c.blue != blue)
    {
        return false;
    }
    return true;
}

uint8_t Color::getRed(){return red;}
uint8_t Color::getGreen(){return green;}
uint8_t Color::getBlue(){return blue;}



const Color Color::Black = Color(0,0,0);
const Color Color::White = Color(255,255,255);

}
