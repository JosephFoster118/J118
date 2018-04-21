#include "J118/ArgParse.h"

namespace J118
{
namespace Utilities
{
	ArgParse::ArgParse()
	{
		
	}
	
	void ArgParse::parseArgs(int argc, const char** argv)
	{
		for(int i = 0; i < argc; i++)
		{
			if(argv[i][0] == '-')
			{
				if(argv[i][1] == '-')
				{
					
				}
				else
				{
					
					if(checkIfHasStaticArgument(argv[i][1]))
					{
						
						for(uint8_t j = 0; j < static_arguments.size(); j++)
						{
							if(static_arguments[j].single == argv[i][1])
							{
								printf("Setting...\n");
								static_arguments[j].value = !static_arguments[j].value;
							}
						}
					}
						
				}
			}
		}
	}
	
	void ArgParse::addStatic(char single, const char* long_name, const char* description, bool defualt_value)
	{
		if(checkIfHasStaticArgument(single))
		{
			return;
		}
		StaticArgument to_add;
		to_add.single = single;
		to_add.long_name = long_name;
		to_add.description = description;
		to_add.value = defualt_value;
		static_arguments.push_back(to_add);
	}
			
	bool ArgParse::checkIfHasStaticArgument(char single)
	{
		for(uint8_t i = 0; i < static_arguments.size(); i++)
		{
			if(static_arguments[i].single == single)
			{
				return true;
			}
		}
		return false;
	}
	bool ArgParse::getStatic(char single)
	{
		if(checkIfHasStaticArgument(single))
		{
			for(uint8_t i = 0; i < static_arguments.size(); i++)
			{
				if(static_arguments[i].single == single)
				{
					return static_arguments[i].value;
				}
			}
		}
		return false;
	}
}
}