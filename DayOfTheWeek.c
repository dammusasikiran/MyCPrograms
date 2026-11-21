#include <stdio.h>

int main() {
    int D;
    if (scanf("%d",&D) != 1) return 0;

    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char *suffix;

    if (D == 1) {
        suffix = "st";
    } else if (D == 2) {
        suffix = "nd";
    } else if (D == 3) {
        suffix = "rd";
    } else {
        suffix = "th";
    }

    printf("The %d%s Day of the week is %s\n", D, suffix, days[D - 1]);
    
    return 0;
}
