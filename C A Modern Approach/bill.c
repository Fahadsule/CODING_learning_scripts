#include <stdio.h>
int main(void)
{
    int twenties, tens,fives,ones, amount;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    twenties=amount/20;
    amount=amount%20;

    tens=amount/10;
    amount=amount%10;

    fives=amount/5;
    amount=amount%amount;

    ones=amount;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n",fives);
    printf(" $1 bills: %d\n", ones);

    return 0;

}