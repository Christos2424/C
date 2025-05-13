#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Give the first integer number");
    scanf("%d",&a);
    printf("Give the second integer number");
    scanf("%d",&b);
    c = a*b;

    if (c>0)
        printf("both numbers have the same sign");

    return 0;
}
