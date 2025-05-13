#include <stdio.h>
int main(void)
{
int i;
float mo,a,b;
b=0;
mo=0;
for (i=1; i<=10; i=i+1)
{
printf ("Give a number : ");
scanf("%f",&a);
if (a>0)
{mo=mo+a;
b=b+1;}

}

if (mo!=0)
{
mo=mo/b;
printf("O mesos oros einai : %f",mo);
}
else
printf ("Den exei mo");

return 0;
}
