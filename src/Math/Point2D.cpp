#include "J118/Point2D.h"




namespace J118
{
template <class T>
Point2D<T>::Point2D(T x, T y)
{
    coordinate.first = x;
    coordinate.second = y;
}
}

