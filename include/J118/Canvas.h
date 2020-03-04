#pragma once
#include "J118/Color.h"
#include "J118/Point2D.h"
#include <J118/Polygon.h>
#include <stdint.h>
#include <SDL2/SDL.h>

#include <string.h>


namespace J118
{

//TODO: Add copy constructor
class Canvas
{

public:
    Canvas(uint32_t width_, uint32_t height_);
    Canvas() = delete;
    virtual ~Canvas();

    void copyTo656TFT(uint16_t* tft_memory);

    void drawLine(Point2D<uint32_t>, Color color);
    void drawPolygon(Polygon polygon,Color color = Color::White);
    void clearCanvas(Color color = Color::Black);
    void drawCirle(Point2D<uint32_t> center, Color color = Color::White);
    void drawRect(std::array<Point2D<uint32_t>,2> rect, Color color = Color::White);
    SDL_Surface *surface;


private:
    Color*** data;
    uint32_t width;
    uint32_t height;

};



}
