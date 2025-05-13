#include <stdio.h>

int main(void)
{
    float a,b,c;
    printf("Give your days of work and your pay per day : ");
    scanf ("%f %f",&a,&b);
    //calculating pay after taxes
    c =(a*b)-(a*b)*0.2;
    printf("Your pay after taxes is : %8.2f \n",c );

    return 0;
}
