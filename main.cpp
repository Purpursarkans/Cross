#include <iostream>
using namespace std;

#define DEBUG 1
#define PLATFORM "NULL"
#define BIT 64

#if defined (__x86_64__) || defined(__aarch64__)

        #ifdef _WIN64
                #define PLATFORM "Windows"
        #elif __linux__
                #define PLATFORM "Linux"
        #endif
#else
        #define BIT 0
        exit (1);
#endif

int main()
{
        #if DEBUG == 1
                cout << "x64 detect" << endl << PLATFORM << " detect" << endl;
        #endif
        #if BIT != 64
                cout << "need x64-bit platform" << endl;
        #endif
        return 0;
}
