#include <stdio.h>

int main() {
    int X;
    
    // Read the year input
    if (scanf("%d", &X) != 1) return 0;
    
    // A year is a leap year if:
    // 1. It is divisible by 4 AND not divisible by 100, OR
    // 2. It is divisible by 400
    if ((X % 4 == 0 && X % 100 != 0) || (X % 400 == 0)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
