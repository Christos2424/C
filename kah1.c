#include <stdio.h>
int main(void)

{
    char a;
    printf ("Give a character :");
    scanf ("%c",&a);
    while (a<'z')
    {
        a=a+1;
        printf ("The next number is : %c \n",a);
    }

    return 0;
}
