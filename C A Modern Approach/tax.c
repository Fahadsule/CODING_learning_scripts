#include <stdio.h>
int main(void)
{
    float amount;
    printf("Enter an amount: ");
    printf("                _________");
    scanf("%f",&amount);
    float final=amount*1.05;
    printf("With Tax added %f",final);
    return 0;
}