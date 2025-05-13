#include <stdio.h>
int main(void)

{
int a,i,max,count;
count=0;
for (i=1; i<=10; i=i+1)
{
printf("Give a number : ");
scanf("%d",&a);
if (i==1)
    max=a;
if (a>max)
    {
    max=a;
    count=0;
    }
if (max==a)
count=count+1;
}
printf("The Max number is : %d and the times it appears is %d",max,count);
return 0;

}
