#include<stdio.h>

int main(void)
{
    int a,b,c,d,min;
    printf("Give the first number : ");
    scanf("%d",&a);
    printf("Give the second number : ");
    scanf("%d",&b);
    printf("Give the third number : ");
    scanf("%d",&c);
    printf("Give the fourth number : ");
    scanf("%d",&d);
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    printf("The smallest number is : %d",min);
    return 0;



}
