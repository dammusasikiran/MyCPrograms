include <stdio.h>

int main() {
    int M;
    scanf("%d",&M);

   int Hours = M/60;
    int Minutes = M % 60;
    printf("%d Hours %d Minutes\n",Hours,Minutes); 
    return 0;
}
