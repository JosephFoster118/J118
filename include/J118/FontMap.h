#pragma once

#include <stdint.h>
#include <memory>
#include <stdio.h>
#include <J118/Color.h>
#include <J118/Thread.h>
#include <utility>
#include <iostream>
#include <map>

namespace J118
{

class FontMapLetter
{
public:
    size_t DATA_SIZE = 20480;
private:
    uint16_t width;
    uint16_t height;
    uint8_t data[20480];
    uint8_t buffer[20480] ;
public:
    FontMapLetter(std::string font, char letter);
    FontMapLetter(const FontMapLetter &obj);
    virtual ~FontMapLetter();
    uint8_t* getData();
    uint16_t getWidth();
    uint16_t getHeight();
    uint8_t getPixel(uint16_t x, uint16_t y);


};

class FontMap
{
private:
    FontMapLetter** letter;
public:
    typedef std::pair<size_t,size_t> FontDimensions;
    FontMap(std::string name);
    FontMap(const FontMap &obj);
    virtual ~FontMap();
    FontMapLetter* getLetter(char l);
    FontDimensions getTextDimensions(std::string text);

};

}