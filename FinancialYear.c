#include <stdio.h>

int main() {
    int m;
    if (scanf("%d", &m) != 1) return 0;
    
    int quarter;
    if (m >= 4 && m <= 6) {
        quarter = 1;
    } else if (m >= 7 && m <= 9) {
        quarter = 2;
    } else if (m >= 10 && m <= 12) {
        quarter = 3;
    } else {
        quarter = 4;
    }
    
    printf("Month-%d falls under Quarter-%d\n", m, quarter);
    
    return 0;
}
