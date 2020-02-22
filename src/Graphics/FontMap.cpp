#include "J118/FontMap.h"

namespace J118
{
    struct BmpHeader
    {
        char ID[2];
        long FileSize;
        long RESERVED;
        long BitmapDataOffset;
        long BitmapHeaderSize;
        long Width;
        long Height;
        short NrOfPlanes;
        short BitsPerPixel;
        long Compression;
        long BitmapDataSize;
        long HorizontalResolution;
        long VerticalResolution;
        long Colors;
        long ImportantColors;
    };
using namespace std;
FontMapLetter::FontMapLetter(std::string font, char letter)
{
    string file_path;
    if(letter == '/')
        file_path = font + "/[slash].letter";
    else
        file_path = font + "/[" + letter + "].letter";

    FILE* bitmap = fopen(file_path.c_str(),"rb");
    if(bitmap == nullptr)
    {
        printf("Fuck\n");
        
    }


    fread(&width,sizeof(uint16_t),1,bitmap);
    fread(&height,sizeof(uint16_t),1,bitmap);

    for(uint8_t y = 0; y < height; y++)
    {
        for(uint8_t x = 0; x < width; x++)
        {
            fread(data + (y*width+x),sizeof(uint8_t),1,bitmap);
        }
    }
    fclose(bitmap);

    // free(buffer);
}

FontMapLetter::~FontMapLetter()
{
    //delete [] data;
}

FontMap::FontMap(std::string name)
{
    letter = new FontMapLetter*[200];
    memset(letter,0,200);
    for(uint16_t i = ' '; i < '~' + 1; i++)
    {
        //printf("Inserting \"%c\"\n", (char)i);
        letter[i - ' '] = new FontMapLetter(name, (char)i);
    }
}

FontMap::~FontMap()
{
    for(int i = 0; i < 200; i++)
    {
        if(letter[i] != nullptr)
        {
            delete letter[i];
            letter[i] = nullptr;
        }
    }
    delete [] letter;
}

FontMapLetter* FontMap::getLetter(char l)
{
    return letter[l - ' '];
}

uint8_t* FontMapLetter::getData()
{
    return data;
}

uint8_t FontMapLetter::getPixel(uint16_t x, uint16_t y)
{
    return data[x + y*width];
}

uint16_t FontMapLetter::getWidth(){return width;}
uint16_t FontMapLetter::getHeight(){return height;}

std::pair<size_t,size_t> FontMap::getTextDimensions(std::string text)
{
    size_t width = 0;
    size_t height = 0;
    for(int i = 0; i < text.length(); i++)
    {
        width += getLetter(text[i])->getWidth();
        height = max(height,(size_t)getLetter(text[i])->getHeight());
    }
    return std::pair<size_t,size_t>(width,height);
}

FontMap::FontMap(const FontMap &obj)
{
    letter = new FontMapLetter*[200];
    for(size_t i = 0; i < 200; i++)
    {
        if(obj.letter[i] == nullptr) continue;
        FontMapLetter* letter_to_copy = obj.letter[i];
        letter[i] = new FontMapLetter(*letter_to_copy);
    }
}


FontMapLetter::FontMapLetter(const FontMapLetter &obj)
{
    memcpy(data,obj.data,DATA_SIZE);
    width = obj.width;
    height = obj.height;
}

}