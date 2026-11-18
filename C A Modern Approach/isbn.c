#include <stdio.h>
int main(void)
{
    int GSI,Group,code,item,check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&GSI,&Group,&code,&item,&check);
    printf("GSI Prefix: %d\n",GSI);
    printf("Group Identifier: %d\n",Group);
    printf("Publisher's Code: %d\n",code);
    printf("Item Number: %d\n",item);
    printf("Check Digit: %d\n",check);
    return 0;
}