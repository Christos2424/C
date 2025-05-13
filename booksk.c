#include<stdio.h>

int main(void)

{
    int books;
    float price,fprice,offer;
    printf("Give the number of books : ");
    scanf("%d",&books);
    price = books * 20 ;
    if (books >= 50)
    {
        offer = 2 ;
        fprice = price - 40 ;
    }

    if (books < 50)
    {
        offer = 1 ;
        fprice = price - 20 ;
    }


    if (price > 800)
    {
        offer = books * 0.1 ;
        fprice = fprice - (fprice * 0.1) ;
    }
    printf("The customer bought %d books he would have to pay %2.0f his offer is %2.0f of books and  he will pay %2.0f",books,price,offer,fprice);
    return 0;
}
