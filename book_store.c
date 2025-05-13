#include<stdio.h>
int main(void)

{
    int coffee;
    float price;
    char kind,A,B;
    printf("What is the type of coffee A or B ? ");
    scanf ("%c",&kind);
    printf("How much coffee do you want ? ");
    scanf ("%d",&coffee);
    if (kind = A)
    {
        if (coffee <= 400 )
            price = coffee * 0.0095;
        if  (coffee> 400 )
            price = coffee * 0.0085;
    printf ("You bought coffee type A and you paid %8.2f",price);
    }
    if (kind = B )
    {
        if (coffee <= 500 )
            price = coffee * 0.012;
        if (coffee > 500 )
            price = coffee * 0.010;
    printf ("You bought coffee type B and you paid %8.2f",price);

    }

    return 0;





}
