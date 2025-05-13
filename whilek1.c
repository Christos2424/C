#include <stdio.h>
int main(void)
{
    int i;
    float a,b,sum,mo;
    mo=0;
    b=0;
    for (i=0; i<10; i++)
    {
    printf("Give the grade of the student : ");
    scanf("%f",&a);
    while ((a<20)&&(a>0))
    {
    sum=sum+a;
    b=b+1;
    }
    }
    mo=sum/b;
    printf("The mo is : %f",mo);

    return 0;
}
