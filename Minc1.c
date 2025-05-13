#include <stdio.h>
int main(void)

{
    int a,i,max,place;

    for (i=1; i<=5; i=i+1)
       {
        printf("Give a number : ");
        scanf("%d",&a);
        if (i=1)
            max=a;
        if (a>max)
        {place=i;
        max=a;}
       }
printf("The smallest number is : %d and the place is %d",max,place);
  return 0;
}
