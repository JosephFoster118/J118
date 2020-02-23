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

void Canvas::drawPolygon(Polygon polygon,Color color)
{
    printf("Drawing polygon\n");
    int  nodes, nodeX[360], pixelX, pixelY, i, j, swap ;
    for(i = 0; i < 360; i++)
    {
        nodeX[i] = 10000000;
    }
    int polyCorners = polygon.getPointCount();
    for (pixelY=0; pixelY<180; pixelY++)
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

            std::sort(std::begin(nodeX),std::end(nodeX));
            for(int c = 0; c < nodes; c++)
            {
                printf("Node[%d] %d\n",c,nodeX[i]);
            }
        }
    }

    //  Sort the nodes, via a simple “Bubble” sort.

}



}

