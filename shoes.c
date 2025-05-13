#include<stdio.h>

int main(void)

{
    int a,b,c,d;
    printf("How much does one pair of shoes cost ? ");
    scanf("%d",&a);
    printf("What is the number of pairs ? ");
    scanf("%d",&b);
    if (b>18)
        c = (b-3)*a;
    if ((18>=b)&&(b>=10))
        c = (b-2)*a;
    if ((5<=b)&&(b<=9))
        c = (b-1)*a;
    if (b<5)
        c = b*a;
    printf("The team bought %d pairs of shoes paying %d $ for each pair but overall they paid %d $ ",b,a,c);
    return 0;
}
