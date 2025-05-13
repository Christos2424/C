#include <stdio.h>
int main(void)

{
int a,i,b;
b=0;
printf("Give a number : ");
scanf("%d",&a);
for (i=1; i<a; i=i+1)
{
b=b+i;
}
b=b*2+a;
printf("To tetragono tou %d einai %d",a,b);
return 0;
}
