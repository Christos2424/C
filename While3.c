#include<stdio.h>
int main(void)
{
    int num,count,sum;
    sum=0;
    count=0;
    while (sum<=100)
    {
    printf("Give a number : ");
    scanf("%d",&num);
    sum=sum+num;
    count=count+1;
    }
    if (sum>100)
        {sum=sum-num;
         count=count-1;}
    printf("The count of the numbers is %d and the number is %d",count,sum);

    return 0;
}
