#include <stdio.h>
int main(void)

{
    int a,i,m1;
    float mo,sum;

    sum = 0;
    m1 = 0;

    for (i=1; i<=5; i=i+1)
    {
        printf("Give a number : ");
        scanf ("%d",&a);
        if (a%2 == 0)
        {
            sum = sum + a;
            m1 = m1 + 1;
        }
    }

    if (m1 != 0)
    {
       mo = sum / m1 ;
       printf("The mo is %8.2f\n",mo);
    }
    else
        printf("Wrong numbers");

return 0;
}
