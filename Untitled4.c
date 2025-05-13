#include <stdio.h>

int main(void)

{
    int a,b,c;
    printf("Give one number");
    scanf("%d",&a);
    printf("Give one number");
    scanf("%d",&b);
    if (a<b)
        {
            c = a*b;
        }
    else
        {
            c = a+b;
        }
    printf("to apotelesma einai : %d",c);

return 0;
}
