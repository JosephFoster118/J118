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
            data[i][j] = new Color(Color::Black);
        }
    }

    surface = SDL_CreateRGBSurface(0, width, height, 32, 0, 0, 0, 0);
    
    printf("Canvas made\n");



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
        uint8_t color[4];
        memcpy(color,(void*)(surface->pixels) + i*4,4);
        tft_memory[i] = Color(color[0],color[1],color[2]).getColor565();
    }
}

void Canvas::drawPolygon(Polygon polygon,Color color)
{
    int  nodes, nodeX[360], pixelX, pixelY, i, j, swap ;
    for(i = 0; i < 360; i++)
    {
        nodeX[i] = 10000000;
    }
    int polyCorners = polygon.getPointCount();
    for (pixelY=0; pixelY<128; pixelY++)
    {
        nodes=0; j=polyCorners-1;
        for (i=0; i<polyCorners; i++)
        {
            if (polygon[i].y<(double) pixelY && polygon[j].y>=(double) pixelY
                ||  polygon[j].y<(double) pixelY && polygon[i].y>=(double) pixelY)
            {
                nodeX[nodes++]=(int) (polygon[i].x+(pixelY-polygon[i].y)/(polygon[j].y-polygon[i].y)
                    *(polygon[j].x-polygon[i].x)); 
            }
            j=i;

            
        }
        std::sort(std::begin(nodeX),std::end(nodeX));

        for (i=0; i<nodes; i+=2) {
        if   (nodeX[i  ]>=128) break;
        if   (nodeX[i+1]> 0 ) {
        if (nodeX[i  ]< 0 ) nodeX[i  ]=0 ;
        if (nodeX[i+1]> 128) nodeX[i+1]=128;
        for (pixelX=nodeX[i]; pixelX<nodeX[i+1]; pixelX++) *(data[pixelX][pixelY]) = color;
        }
        }


    }

    //  Sort the nodes, via a simple “Bubble” sort.

}

void Canvas::clearCanvas(Color color)
{
    SDL_LockSurface(surface);
    SDL_memset(surface->pixels, 0, surface->h * surface->pitch);

    SDL_UnlockSurface(surface);
}

void Canvas::drawCirle(Point2D<uint32_t> center, Color color)
{
    //circleColor (surface,50,50,color.getColorSDL());
}

void Canvas::drawRect(std::array<Point2D<uint32_t>,2> rect, Color color)
{
    SDL_LockSurface(surface);
    SDL_Rect sdl_rect;
    sdl_rect.x = rect[0].x;
    sdl_rect.y = rect[0].y;
    sdl_rect.w = rect[1].x - rect[0].x;
    sdl_rect.h = rect[1].y - rect[0].y;
    SDL_FillRect(surface,&sdl_rect,color.getColorSDL());
    SDL_UnlockSurface(surface);
}

}

