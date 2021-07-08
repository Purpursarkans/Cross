#include <iostream>

using namespace std;

int main()
{
	#ifdef __x86_64__
                cout << "x64 detect" << endl;
		#ifdef _WIN64
			cout << "windows64 detect" << endl;
		#endif
		#ifdef __linux__ 
			cout << "linux detect" << endl;
		#endif
	#else
		cout << "need x64bit platform"
		return 0;
	#endif
	
}
