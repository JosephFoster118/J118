/*
 * Exception.h
 *
 *  Created on: Nov 26, 2016
 *      Author: joseph
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <string>

namespace J118
{
namespace ErrorHandling
{

class Exception
{
public:
	Exception();
	Exception(int id, const char* n, const char* d);
	virtual ~Exception();

	int getId();
	std::string getName();
	std::string getDesc();

protected:
	int error_id;
	std::string name;
	std::string desc;
};

} /* namespace ErrorHandling */
} /* namespace J118 */

#endif /* EXCEPTION_H_ */
