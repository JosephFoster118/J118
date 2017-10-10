#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

#include "J118/UtilityMacros.h"

namespace J118
{
namespace Utilities
{

class Output
{
public:
	enum OutputType
	{
		CONSOLE_OUT = 0,
		FILE_OUT,
		CONSOLE_AND_FILE_OUT
	};
private:
	static const char* DefaultOutputFileName;
	static char* GlobalOutputFileName;
	static FILE* GlobalOutputFile;
	static OutputType defualt_output_type;
public:
	
	static void Initialize();
	static void Initialize(const char* path);
	static void defualtPrintf(const char* str, ...);
	static void destroy();
	static void setOutput(OutputType type);
	
};
}
}
