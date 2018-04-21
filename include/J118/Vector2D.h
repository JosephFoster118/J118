/*
 * Vector2D.h
 *
 *  Created on: Nov 28, 2016
 *      Author: joseph
 */

#ifndef INCLUDE_J118_VECTOR2D_H_
#define INCLUDE_J118_VECTOR2D_H_

#include <stdio.h>


namespace J118
{


//! \todo: add overloaded operators
//! \todo: add cross product

class Vector2D
{
public:
	Vector2D();
	Vector2D(double x, double y);

	double getX();
	double getY();

	static Vector2D add(Vector2D augend_1, Vector2D augend_2);
	Vector2D add(Vector2D augend);
	Vector2D add(double x, double y);
	Vector2D operator+(Vector2D augend);
	Vector2D operator-(Vector2D subtrahend);

	static double dotProduct(Vector2D multiplicand, Vector2D multiplier);
	double dotProduct(Vector2D multiplier);
	double operator*(Vector2D multiplier);
	Vector2D operator*(double magnitude);
	

	virtual ~Vector2D();
private:
	double x_comp;
	double y_comp;
};

} /* namespace J118 */

#endif /* INCLUDE_J118_VECTOR2D_H_ */
