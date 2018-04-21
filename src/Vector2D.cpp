/*
 * Vector2D.cpp
 *
 *  Created on: Nov 28, 2016
 *      Author: joseph
 */

#include <J118/Vector2D.h>

namespace J118
{




/**
 * \brief Default Initializer
 *
 *  Initializes the object to a default value of <0,0>
 */
Vector2D::Vector2D()
{
	x_comp = 0;
	y_comp = 0;
}

/**
 * \brief ComponentIinitializer
 *
 *  Initializes the object to a default value of <x,y>
 *
 *  @param x The X component of the vector
 *  @param y The Y component of the vector
 */
Vector2D::Vector2D(double x, double y)
{
	x_comp = x;
	y_comp = y;
}

/**
 * \brief Get the X component
 *
 * @return the X component of the vector
 */
double Vector2D::getX()
{
	return x_comp;
}

/**
 * \brief Get the Y component
 *
 * @return the Y component of the vector
 */
double Vector2D::getY()
{
	return y_comp;
}

/**
 * \brief Adds 2 Vector2D
 *
 * Adds 2 Vector2D values
 *
 * @param augend_1 The first vector
 * @param augend_2 The first vector
 * @return The sum of the 2 augend Vector2D
 */
Vector2D Vector2D::add(Vector2D augend_1, Vector2D augend_2)
{
	return Vector2D(augend_1.getX() + augend_2.getX(), augend_1.getX() + augend_2.getY());
}

/**
 * \brief adds a vector to this one
 *
 * Adds an Vector2D values with this vector and returns the sum
 *
 * @param augend The vector to add to this one
 * @return The sum of this vector and the augend vector
 */
Vector2D Vector2D::add(Vector2D augend)
{
	return Vector2D(x_comp + augend.getX(), y_comp + augend.getY());
}

/**
 * \brief adds a vector to this one (Operator Version)
 *
 * Adds an Vector2D values with this vector and returns the sum
 *
 * @param augend The vector to add to this one
 * @return The sum of this vector and the augend vector
 */
Vector2D Vector2D::operator+(Vector2D augend)
{
	return Vector2D(x_comp + augend.getX(), y_comp + augend.getY());
}

/**
 * \brief subtracts a vector to this one (Operator Version)
 *
 * Subtracts an Vector2D values with this vector and returns the difference
 *
 * @param subtrahend The vector to add to this one
 * @return The difference of this vector and the subtrahend vector
 */
Vector2D Vector2D::operator-(Vector2D subtrahend)
{
	return Vector2D(x_comp - subtrahend.getX(), y_comp - subtrahend.getY());
}

/**
 * \brief Adds the given components to this vector and return the result
 *
 * Adds the given components to this vector and return the result
 *
 * @param x The X component to add
 * @param y The Y component to add
 * @return The sum of of this vector and the given components
 */
Vector2D Vector2D::add(double x, double y)
{
	return Vector2D(x_comp + x, y_comp + y);
}

/**
 * \brief Calculate the dot product of 2 Vector2D
 *
 * Calculate the dot product of 2 Vector2D
 *
 * @param multiplicand The first vector of the dot product
 * @param multiplier The second vector of the dot product
 * @return The dot product of multiplicand and multiplier
 */
double Vector2D::dotProduct(Vector2D multiplicand, Vector2D multiplier)
{
	return (multiplicand.getX()*multiplier.getX()) + (multiplicand.getY()*multiplier.getY());
}

/**
 * \brief Calculate the dot product of 2 Vector2D
 *
 * Calculate the dot product of 2 Vector2D where this Vector2D is the multiplicand
 *
 * @param multiplier The second vector of the dot product
 * @return The dot product of multiplicand and multiplier
 */
double Vector2D::dotProduct(Vector2D multiplier)
{
	return x_comp*multiplier.getY() + y_comp*multiplier.getX();
}

/**
 * \brief Calculate the dot product of 2 Vector2D (Operator Version)
 *
 * Calculate the dot product of 2 Vector2D where this Vector2D is the multiplicand
 *
 * @param multiplier The second vector of the dot product
 * @return The dot product of multiplicand and multiplier
 */
double Vector2D::operator*(Vector2D multiplier)
{
	return x_comp*multiplier.getY() + y_comp*multiplier.getX();
}

Vector2D Vector2D::operator*(double magnitude)
{
	return Vector2D(x_comp*magnitude, y_comp*magnitude);
}

Vector2D::
	
Vector2D::~Vector2D()
{
	//Nothing yet
}

} /* namespace J118 */


