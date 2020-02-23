#pragma once
#include <utility>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <vector>

#include <sstream> // for ostringstream

namespace J118
{

template <class C>
struct Point2D
{
    C x;
    C y;
    Point2D(C x_, C y_)
    {
        x = x_;
        y = y_;
    }
    Point2D(const Point2D<C>& p)
    {
        x = p.x;
        y = p.y;
    };
};

}

