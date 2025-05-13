#include<stdio.h>
int main(void)
{
    int num,count,sum,left;
    sum=0;
    count=0;
    left=500;
    while (sum!=500)
    {
    printf("Give a price : ");
    scanf("%d",&num);
    sum=sum+num;
    left=left-num;
    count=count+1;
    if (num<0)
        {printf("invalid purchase");
        sum=sum-num;
         count=count-1;
         left=left+num;}
    if (sum<500)
        {printf("successful purchase \n");
        printf("The rest of your funds are %d and you have purchased %d products \n",left,count);}
    if (sum>500)
        {sum=sum-num;
         count=count-1;
         left=left+num;
    printf("failed purchase");
    printf("The rest of your funds are %d and you have purchased %d products \n",left,count);}
    }

    printf("The rest of your funds are %d and you have purchased %d products \n",left,count);

    return 0;
}
