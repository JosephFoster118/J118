#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>
#include <vector>


namespace J118
{
namespace Utilities
{

class ArgParse
{
private:
	typedef struct
	{
		char single;
		std::string long_name;
		std::string description;
		bool value;
	}StaticArgument;
	
	std::vector<StaticArgument> static_arguments;
public:
	ArgParse();
	void parseArgs(int argc, const char** argv);
	void addStatic(char single, const char* long_name, const char* description, bool defualt_value = false);
	bool getStatic(char single);
	bool checkIfHasStaticArgument(char single);

};

}
}

