#include<stdio.h>
int main(void)
{
    int i,a;
    i=0;
    a=0;
    while (i<9)
    {
        if (i<5)
            {a=a+1;
            i=i+1;}
        else
            {i=i+1;
            a=a-1;}
        printf("%d",a);
    }
return 0;
}
