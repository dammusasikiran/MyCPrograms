#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value\t");
    scanf("%d %d %d ",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("the given values form a equilateral triangle ");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
