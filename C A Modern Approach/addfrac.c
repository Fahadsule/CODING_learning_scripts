#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, resultnum, resultdenom;

    printf("Enter the first fraction: \n");
    scanf("%d/%d",&num1,&denom1);

    printf("Enter the second fraction: \n");
    scanf("%d/%d",&num2,&denom2);

    resultnum=(num1*denom2)+(num2*denom1);
    resultdenom=denom1*denom2;
    printf("The resut function is %d/%d",resultnum,resultdenom);
    return 0;
}