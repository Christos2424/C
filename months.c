#include<stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("What is the number of the month ? ");
    scanf("%d",&a);
    printf("What is the year ? ");
    scanf("%d",&b);
    if (a==2)
    {
        if ((b%4==0)&&(b%100!=0)||(b%400==0))
            c = 29;
        else
            c = 28;
    }
    else
    {
        if (a<=7)
        {
            if( a % 2 ==1)
                c =31;
            else c = 30;
        }
        else
            {
            if( a % 2 ==1)
                c =30;
            else c = 31;
            }
    }
    printf("The year is %d , the month is the %d th  , the total days of the month are %d",b,a,c);
return 0;
}
