#include <stdio.h>
int main(void)

{
    int a,i,max,max2;

    for (i=1; i<=10; i=i+1)
       {
        printf("Give a number : ");
        scanf("%d",&a);
        if (i==1)
        {max=a;
        max2=a;}
        if (a>max)
        {max2=max;
        max=a;}
        if ((a<max)&&(a>max2))
            max2=a;
       }
printf("The Biggest number is : %d and the second biggest number is %d",max,max2);
  return 0;
}
