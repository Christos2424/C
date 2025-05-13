#include <stdio.h>
int main(void)
{
int i ;
float pass,percent,full ;
percent = 0;
full = 0;
for (i=1; i<=5; i++)
{
printf("Give the number of passengers from : \n");
scanf("%f",&pass);
if (pass == 350)
{
percent = percent +1;

}
full = full + pass ;
}
percent = percent/5 * 100;
printf("The number of passengers is %2.2f and the percentage of passengers in a trip/ride is %2.2f",full,percent);

return 0;
}

