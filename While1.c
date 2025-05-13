#include<stdio.h>
int main(void)
{
    int therm,math,sum, counter;
    counter = 0;
    printf("Give the temperature inside the sun in kelvin : ");
    scanf("%d",&therm);
    while (therm != 0)
    {
        if (therm == 20)
            counter = counter + 1;

    printf("Give the temperature inside the sun in kelvin :\n");
    scanf("%d",&therm);
    }

    printf("The counter is %d \n",counter);

    return 0;
}
