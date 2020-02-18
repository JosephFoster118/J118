#include "J118/Canvas.h"


namespace J118
{
Canvas::Canvas(uint32_t width_, uint32_t height_)
{
    width = width_;
    height = height_;
    data = new Color**[width];
    
    for(auto i = 0; i < width; i++)
    {
        data[i] = new Color*[height];
        for(auto j = 0; j < height; j++)
        {
            data[i][j] = new Color(Color::White);
        }
    }

}


Canvas::~Canvas()
{
    if(data != nullptr)
    {
        for(auto i = 0; i < width; i++)
        {
            for(auto j = 0; j < height; j++)
            {
                delete data[i][j];
            }
            if(data[i] != nullptr) delete [] data[i];
            data[i] = nullptr;
        }
        //delete [] data;
        data = nullptr;
    }
}

void Canvas::copyTo656TFT(uint16_t* tft_memory)
{
    for(auto i = 0; i < 128*128; i++)
    {
        tft_memory[i] = data[i%width][i/height]->getColor565();
    }
}


}

