
#define SAFE_DELETE(pointer)\
if( pointer != nullptr)\
{\
	delete pointer;\
	pointer = nullptr;\
}\

#define SAFE_DELETE_ARRAY(pointer)\
if( pointer != nullptr)\
{\
	delete [] pointer;\
	pointer = nullptr;\
}


#define SAFE_FILE_CLOSE(pointer)\
if( pointer != nullptr)\
{\
	fclose(pointer);\
	pointer = nullptr;\
}
