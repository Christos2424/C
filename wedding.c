#include<stdio.h>

int main(void)

{
    int a,b;
    printf("Give the number of the participants");
    scanf("%d",&a);
    if (a<= 500)
        b = a * 15;
    if ((a>500)&&(a<800))
        b = a * 13;
    if ((a>800)&&(a<=1000))
        b = 10000;
    if (a>1000)
        b = 10000 + (a - 1000)*10;
    printf("The number of participants is %d and the wedding will cost %d",a,b);
    return 0;

}

