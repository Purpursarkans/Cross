#include <iostream>
using namespace std;

#define DEBUG 1

#if defined (__x86_64__) || defined(__aarch64__)

    #ifdef _WIN64
        #define PLATFORM "Windows"
        #define PWIN 1
    #elif __linux__
        #define PLATFORM "Linux"
        #define PLIN 1
    #else
        #define PLATFONR "Unknown"
    #endif
    #define BIT 64
#else
        #define BIT 0
        exit (1);
#endif

void pause()
{
    #ifdef PWIN
        system("pause");
    #elif PLIN
        system("read -n1 -r -p \"Press any key to continue...\" key; echo -e \"\n\"");
    #endif
}

int main()
{
    #if DEBUG == 1
        cout << "x64 detect" << endl << PLATFORM << " detect" << endl;
    #endif
    #if BIT != 64
        cout << "need x64-bit platform" << endl;
    #endif
    pause();
    return 0;
}
