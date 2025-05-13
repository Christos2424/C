#include<stdio.h>
int main(void)

{
    int pay,kids,epid,sum;
    printf("Give your basic pay :");
    scanf("%d",&pay);
    printf("Give the number of your kids : ");
    scanf("%d",&kids);
    if (kids == 0)
        sum = pay;
        epid = 0;
    if (kids == 1)
    {
        epid = (pay * 0.05);
        sum = pay + (pay * 0.05);
    }
    if (kids == 2)
        {
            epid = (pay * 0.1);
        sum = pay + (pay * 0.1);
        }
    if (kids == 3)
        {
            epid = (pay * 0.2);

        sum = pay + (pay * 0.2);
        }
    if (kids >= 4)
        {

            epid = pay*(0.2 + (0.05 * (kids - 3)));
            sum = pay + epid;
        }
    printf("The extra pay is %d $ and you will receive %d $",epid,sum);
    return 0;


}
