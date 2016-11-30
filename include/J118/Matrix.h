/*
 * Matrix.h
 *
 *  Created on: Oct 21, 2016
 *      Author: joseph
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <exception>

#define MATRIX_ERROR_OUTPUT_BUFFER_SIZE 256

namespace J118
{
namespace Math
{

//! \todo Remove std exception dependency
//! \todo Add J118 Exception handling

class Matrix
{
public:
	Matrix();
	Matrix(uint32_t row_c, uint32_t col_c);
	virtual ~Matrix();
	double getElement(uint32_t r, uint32_t c);
	void setElement(uint32_t r, uint32_t c, double v);
	Matrix multiply(double scale);
	uint32_t getRows();
	uint32_t getCols();

	//Statics

	//Overloaded Operators
	void operator=(const Matrix &d);
protected:
	uint32_t rows;
	uint32_t cols;
	double** data;
};

} /* namespace Math */
} /* namespace J118 */

#endif /* MATRIX_H_ */
