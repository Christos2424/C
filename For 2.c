#include <stdio.h>
int main(void)

{
int i;
float a,R;
for (i=1; i<=5; i++)
{
printf("Give the R in cm : ");
scanf("%f",&R);
a=6.28*R;
printf("The R is %2.2f and the perimeter is %2.2f\n",R,a);
}

}
