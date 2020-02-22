#pragma once
#include "J118/Color.h"
#include "J118/Point2D.h"
#include <stdint.h>

namespace J118
{

//TODO: Add copy constructor
class Canvas
{

public:
    Canvas(uint32_t width_, uint32_t height_);
    virtual ~Canvas();

    void copyTo656TFT(uint16_t* tft_memory);

    void drawLine(Point2D<uint32_t>, Color color);

private:
    Color*** data;
    uint32_t width;
    uint32_t height;

};



}
