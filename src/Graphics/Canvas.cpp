#include "J118/Canvas.h"


namespace J118
{
Canvas::Canvas(uint32_t width_, uint32_t height_)
{
    width = width_;
    height = height_;
    data = new Color*[width];
    for(auto i = 0; i < width; i++)
    {
        data[i] = new Color(Color::Black);
    }

}


Canvas::~Canvas()
{
    if(data != nullptr)
    {
        for(auto i = 0; i < width; i++)
        {
            if(data[i] != nullptr) delete [] data[i];
            data[i] = nullptr;
        }
        delete [] data;
        data = nullptr;
    }
}


}

