#include <stdio.h>

int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    printf("Enter the phone number [(XXX) XXX-XXXX]: ");
    scanf("(%1d%1d%1d) %1d%1d%1d-%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    printf("You entered: %d%d%d.%d%d%d.%d%d%d%d",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);
    return 0;
}