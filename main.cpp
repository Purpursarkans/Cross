#include <iostream>

using namespace std;

int main()
{
	
	#ifdef __linux__ 
		cout << "linux detect" << endl;
	#endif
	
	#ifdef _WIN32
		cout << "windows detect" << endl;
	#endif
	
	return 0;
}
