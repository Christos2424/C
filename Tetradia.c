#include<stdio.h>
int main(void)

{
    int books;
    float cost;
    printf("Give the number of books : ");
    scanf("%d",&books);
    if (( books <= 10 ) && ( books > 0))
        cost = books * 2.5;
    if (( books <= 20 ) && ( books > 10))
        cost = ( books - 10 ) * 2.0 + 25 ;
    if (( books <= 50 ) && ( books > 20))
        cost = ( books - 20 ) * 1.7 + 20 +  25;
    if (books > 50)
        cost = (books -50) * 1.5 + 30 * 1.7 + 20 + 25;

    printf("The books will cost %f",cost);
    return 0;

}
