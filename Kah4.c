#include<stdio.h>
int main(void)
{
int vert,hor,a,b;

printf ("Give the number of vertical * ");
scanf("%d",&vert);
printf ("Give the number of horizontal * ");
scanf("%d",&hor);
a=1;
while (a<=vert)
{b=1;
 while (b<=hor)
 {
    if (a==1 || a==vert)
        {printf("*");}
    else
    {if  (b==1 || b==hor)
        {printf("*");}
            else
            {printf(" ");}}
    b++;
 }
printf("\n");
a++;
}
return 0;
}
