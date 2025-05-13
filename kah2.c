#include <stdio.h>
int main(void)
{
    int i;
    float time,ctime;
    char name,bname;
    bname=0;
    ctime=0;
    for (i=0; i<=5; i++)
    {
        printf ("Give the name of the athlete : ");
        scanf ("%c",&name);
        printf ("Give the time of the athlete in the 100 meter run : ");
        scanf ("%f",&time);
        if (time>ctime)
        {
        ctime=time;
        bname=name;
        }
    }
    printf("The best athlete was %c and his time was %f",bname,ctime);
    return 0;
}
