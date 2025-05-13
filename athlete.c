#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    float tim,btime;
    char name[10],bname[10];
    bname[10]=0;
    btime=999;
    for (i=0; i<=5; i++)
    {
        printf ("Give the name of the athlete : ");
        scanf ("%s",name);
        printf ("Give the time of the athlete in the 100 meter run : ");
        scanf ("%f",&tim);
        if (tim<btime)
        {
        btime=tim;
        strcpy(bname,name);
        }
    }
    printf("The best athlete was %s and his time was %f \n",bname,btime);
    return 0;
}
