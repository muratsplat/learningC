

#include <stdio.h>

#if __linux__
   # include "linux.h"
#elif __MACH__
   # include "osx.h"
#endif






int main(int argc, char const *argv[])
{
    printf("Os is %s", getOS());
    return 0;
}
