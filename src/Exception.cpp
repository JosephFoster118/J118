/*
 * Exception.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: joseph
 */

#include "J118/Exception.h"

namespace J118
{
namespace ErrorHandling
{


/**
 * \brief Default constructor
 */
Exception::Exception()
{
	error_id = 0;
	name = "No name";
	desc = "no description";
}

/**
 * \brief Normal constructor
 *
 * Constructs an Exception class be passed through a throw statement
 *
 * @param id The error ID
 * @param n The error name
 * @param d A detailed description of the error
 */
Exception::Exception(int id, const char* n, const char* d)
{
	error_id = 0;
	name = n;
	desc = d;
}

/**
 * \brief Returns error_id
 *
 * @return the ID of the error
 */
int Exception::getId()
{
	return error_id;
}

/**
 * \brief Returns the error name
 *
 * @return The error name
 */
std::string Exception::getName()
{
	return name;
}

/**
 * \brief Returns the error description
 *
 * @return A detailed description of the error
 */
std::string Exception::getDesc()
{
	return desc;
}

Exception::~Exception()
{
	//nothing
}

} /* namespace ErrorHandling */
} /* namespace J118 */
