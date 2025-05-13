#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    float e;
    printf("Give two numbers");
    scanf("%d %d", &a, &b);
    //Calculating the solution
    c = (a+b);
    //Εμφάνιση αποτελεσμάτων
    printf("Το άθροισμα των %d και %d είναι %d \n",a,b,c);
    //Υπολογισμός γινομένου
    d = (a*b);
    //Εμφάνιση αποτελεσμάτων
    printf("Το γινόμενο των %d και %d είναι %d \n",a,b,d);
    //Υπολογισμός μέσου όρου
    e = (a+b)/2.0;
    //Εμφάνιση αποτελεσμάτων
    printf("Ο μέσος όρος των %d και %d είναι %8.4f \n",a,b,e);
    return 0;
    }
