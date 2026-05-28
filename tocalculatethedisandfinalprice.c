
#include <stdio.h>
int main()
{
    int mrp,dis,finalprice;
    printf("enter the value\t");
    scanf("%d",&mrp);
     if(mrp>5000)
    {
        dis=(mrp*20)/100;
        finalprice=mrp-dis;
        printf("%d",finalprice);
    }
    else
    {
        printf(" amount to be paid %d",mrp);
    }
    return 0;
}
