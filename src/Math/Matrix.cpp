/*
 * Matrix.cpp
 *
 *  Created on: Oct 21, 2016
 *      Author: joseph
 */

#include "J118/Matrix.h"

namespace J118
{
namespace Math
{

using namespace std;

//Exceptions
class MatrixNotInitialized: public exception
{
	virtual const char* what() const throw ()
	{
		return "Matrix data not initialized";
	}
};

class MatrixMultiplyInvalDems: public exception
{
	char output[MATRIX_ERROR_OUTPUT_BUFFER_SIZE];
public:
	MatrixMultiplyInvalDems(uint32_t a_r,uint32_t a_c,uint32_t b_r,uint32_t b_c)
	{
		memset(output,0,MATRIX_ERROR_OUTPUT_BUFFER_SIZE);
		sprintf(output,"Invalid dimensions for multiplication, given dimensions a=[%d,%d] b=[%d,%d]",
				a_r,a_c,
				b_r,b_c);
	}
	virtual const char* what() const throw ()
	{
		return output;
	}
};

//Definitions

Matrix::Matrix()
{
	rows = 0;
	cols = 0;
	data = NULL;
}

Matrix::Matrix(uint32_t row_c, uint32_t col_c)
{
	rows = row_c;
	cols = col_c;
	data = new double*[rows];
	for (uint32_t i = 0; i < rows; i++)
	{
		data[i] = new double[cols];
	}
	for (uint32_t i = 0; i < rows; i++)
	{
		for (uint32_t j = 0; j < cols; j++)
		{
			data[i][j] = 0.0;
		}
	}
}

Matrix::~Matrix()
{
	if (data != NULL)
	{
		for (uint32_t i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}
}

double Matrix::getElement(uint32_t r, uint32_t c)
{
	if (data == NULL)
	{
		throw MatrixNotInitialized();
	}
	return data[r][c];
}

void Matrix::setElement(uint32_t r, uint32_t c, double v)
{
	if (data == NULL)
	{
		throw MatrixNotInitialized();
	}
	data[r][c] = v;
}

Matrix Matrix::multiply(double scale)
{
	if (data == NULL)
	{
		throw MatrixNotInitialized();
	}
	Matrix result(this->rows, this->cols);
	for (uint32_t i = 0; i < this->rows; i++)
	{
		for (uint32_t j = 0; j < this->cols; j++)
		{
			result.setElement(i,j,this->getElement(i,j)*scale);
		}
	}
	return result;
}

uint32_t Matrix::getRows()
{
	return rows;
}

uint32_t Matrix::getCols()
{
	return cols;
}

//Overloaded Operators
void Matrix::operator=(const Matrix &d)
{
	rows = d.rows;
	cols = d.cols;

	if (data != NULL)
	{
		for (uint32_t i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}
	data = new double*[rows];
	for (uint32_t i = 0; i < rows; i++)
	{
		data[i] = new double[cols];
	}
	for (uint32_t i = 0; i < rows; i++)
	{
		for (uint32_t j = 0; j < cols; j++)
		{
			data[i][j] = d.data[i][j];
		}
	}
}

} /* namespace Math */
} /* namespace J118 */

