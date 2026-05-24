#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value\t");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else if(a<0)
    {
        printf("%d is Negative",a);
    }
    else
    {
        printf("Number is zero");
    }

    return 0;
}
