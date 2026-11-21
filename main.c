#include <stdio.h>

int main(void) {
#ifdef _WIN32
    printf("Hello World from Windows (MinGW-w64)!\n");
    #ifdef _WIN64
    printf("Architecture: x86_64 (64-bit)\n");
    #else
    printf("Architecture: x86 (32-bit)\n");
    #endif
    printf("Press Enter to exit...");
    getchar();
#else
    printf("Hello World from Linux!\n");
    #if defined(__x86_64__) || defined(_M_X64)
    printf("Architecture: x86_64 (64-bit)\n");
    #elif defined(__aarch64__)
    printf("Architecture: ARM64\n");
    #else
    printf("Architecture: x86 / Other\n");
    #endif
#endif
    return 0;
}
