#pragma once
#include <utility>


namespace J118
{

template <class T>
using Coordinate2D = std::pair<T,T> ;
//TODO: Add copy constructor 

template <class T>
class Point2D
{
public:

    Point2D(T x, T y);

private:

    Coordinate2D<T> coordinate;

};


}

