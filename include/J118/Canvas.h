#pragma once
#include "J118/Color.h"
#include <stdint.h>

namespace J118
{


class Canvas
{

public:
    Canvas(uint32_t width_, uint32_t height_);
    virtual ~Canvas();

private:
    Color** data;
    uint32_t width;
    uint32_t height;

};



}
