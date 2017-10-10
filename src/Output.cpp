#include "J118/Output.h"

namespace J118
{
namespace Utilities
{
	
//Constants
char* Output::GlobalOutputFileName = nullptr;
FILE* Output::GlobalOutputFile = nullptr;
const char* Output::DefaultOutputFileName = "server_log.txt";
Output::OutputType Output::defualt_output_type = CONSOLE_OUT;

//Methods

void Output::Initialize()
{
	SAFE_DELETE_ARRAY(GlobalOutputFileName);
	GlobalOutputFileName = new char[512];
	strcpy(GlobalOutputFileName, DefaultOutputFileName);
	SAFE_FILE_CLOSE(GlobalOutputFile);
	GlobalOutputFile = fopen(DefaultOutputFileName,"a");
}

void Output::Initialize(const char* path)
{
	SAFE_DELETE_ARRAY(GlobalOutputFileName);
	GlobalOutputFileName = new char[512];
	strcpy(GlobalOutputFileName, path);
	SAFE_FILE_CLOSE(GlobalOutputFile);
	GlobalOutputFile = fopen(GlobalOutputFileName,"a");
}

void Output::defualtPrintf(const char* str, ...)
{
	char output[2056];
	va_list vl;
	va_start(vl, str);
	vsprintf(output, str, vl);
	va_end(vl);
	switch(defualt_output_type)
	{
		case CONSOLE_OUT:
		{
			printf("%s", output);
		}break;
		case FILE_OUT:
		{
			time_t t = time(NULL);
			struct tm tm = *localtime(&t);
			if(GlobalOutputFile == nullptr)
			{
				Initialize();
			}
			fprintf(GlobalOutputFile, "%4d-%-2d-%-2d %-2d:%-2d:%-2d::%s",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, output);
		}break;
		case CONSOLE_AND_FILE_OUT:
		{
			printf("%s", output);
			time_t t = time(NULL);
			struct tm tm = *localtime(&t);
			if(GlobalOutputFile == nullptr)
			{
				Initialize();
			}
			fprintf(GlobalOutputFile, "%4d-%-2d-%-2d %-2d:%-2d:%-2d::%s",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, output);
		}break;
		
		defualt:
		{
			
		}break;
	}
	
	
}

void Output::destroy()
{
	SAFE_FILE_CLOSE(GlobalOutputFile);
	SAFE_DELETE_ARRAY(GlobalOutputFileName);
}

void Output::setOutput(OutputType type)
{
	defualt_output_type = type;
}

}
}


