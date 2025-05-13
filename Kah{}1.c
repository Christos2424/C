#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int x[100],N,i,b;

for (i=0; i<10; i++)
{   if (N<20||N>100)
        {
        printf("Give a number form 20 to 100 : ");
        scanf("%d",&N);
        i=0;
        }
    else
    {
        x[N];
        i=10;
    }
}
srand(time(NULL));
for (i=0; i<N; i++)
{
    b=rand()%100;
    printf("\n%d",b);
}

printf("%d",x[N]);
return 0;
}
