#include<stdio.h>
int main(void)
{
    int i;

    for (i=10; i<=20; i=i+1)
    {
        if ( i%2 == 0)
        printf ("%d mod 2 =0   ",i);
        else if ( i%2 == 1)
        printf ("%d mod 2 =1   ",i);
    }

return 0;
}
