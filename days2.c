#include<stdio.h>

int main(void)
{
    int a;
    printf("Give a day");
    scanf("%d",&a);
    if (a==1)
        printf("the day is Monday");
    else if (a==2)
        printf("the day is Tuesday");
    else if (a==3)
        printf("the day is Wednesday");
    else if (a==4)
        printf("the day is Thursday");
    else if (a==5)
        printf("the day is friday");
    else if (a==6)
        printf("the day is Saturday");
    else if (a==7)
        printf("the day is Sunday");
    else if (a>7)
        printf ("wrong number");
    else if (a<1)
        printf ("wrong number");


return 0;
}

