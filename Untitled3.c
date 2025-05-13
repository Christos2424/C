#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Give the year when you were born : ");
    scanf("%d",&a);
    b = 2022-a;
    if (b>25)
        printf("You shall pass your age is %d\n",b);


    return 0;
}
