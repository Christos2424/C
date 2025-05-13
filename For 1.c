#include <stdio.h>

int main(void)

{
int a,i;
for (i=1; i<=5; i++)
{
printf("Give a number");
scanf("%d",&a);
a = a * 3;
printf("Result : %d\n ",a);

}
printf("End of program");
return 0;
}
