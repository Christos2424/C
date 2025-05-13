#include <stdio.h>
int main(void)

{
    int a,i,min,place;
    printf("Give a number : ");
    scanf("%d",&a);
    min=a;
    place=1;
    for (i=2; i<=5; i=i+1)
       {
        printf("Give a number : ");
        scanf("%d",&a);
        if (a<min)
        {place=i;
        min=a;}
       }
printf("The smallest number is : %d and the place is %d",min,place);
  return 0;
}
