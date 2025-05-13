#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int x,i;
srand(time(NULL));
for (i=0; i<10; i++)
{
    x=rand()%100;
    printf("\n%d",x);
}
return 0;
}
