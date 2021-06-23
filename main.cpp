#ifdef __linux__ 
    #define LINUX
#elif _WIN32
	#define WINDOWS
#else
	#define UNKNOWN
#endif


#include <iostream>

using namespace std;

int main()
{
	cout << "Hello world on linux" << endl;
	cout << "Hello world on windows" << endl;
	
	#ifdef LINUX
		cout << "linux detect" << endl;
	#endif
	
	#ifdef WINDOWS
		cout << "windows detect" << endl;
	#endif
	
	return 0;
}
