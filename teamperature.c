#include <stdio.h>

int main(void)
{
    float a,b;
    printf (" give the temperature in celsious");
    scanf ("%f",&a);
    b = a*9.0/5+32;
    printf ("The temperature in fahrenheid is %8.2f",b);
    return 0;
}
