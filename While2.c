#include<stdio.h>
int main(void)
{
    int age,young,old,sum;
    young=0;
    old=0;
    sum=0;
    printf("Give the age of the lion : ");
    scanf("%d",&age);
    while (age>0)
    {
        sum=sum+1;
        if (age>10)
            old=old+1;
        if (age<4)
            young=young+1;
    printf("Give the age of the lion : ");
    scanf("%d",&age);
    }
    printf("The total number of lions is %d while the number of old lions is %d and the number of young lions is %d ",sum,old,young);
    return 0;
}
