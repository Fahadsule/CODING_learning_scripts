#include <stdio.h>
int main(void)
{   float loan,rate,payment,balance1,balance2,balance3;

    printf("Enter the amount of Loan: ");
    scanf("%f",&loan);
    printf("Enter the interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);
    printf("\n");

    balance1=loan-(payment)+((rate/1200)*loan);
    loan=balance1;
    balance2=loan-(payment)+((rate/1200)*loan);
    loan=balance2;
    balance3=loan-(payment)+((rate/1200)*loan);

    printf("Balance after first payment : %.2f \n",balance1);
    printf("Balance after second payment : %.2f \n",balance2);
    printf("Balance after third payment : %.2f \n",balance3);
    return 0;
}