#include <stdio.h>
int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,rs1,rs2,rs3,rs4,cs1,cs2,cs3,cs4,ds1,ds2;
    printf("Enter any number from 1 to 16 in any order\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);
    printf("\n");
    printf("%2d %2d %2d %2d\n",n1,n2,n3,n4);
    printf("%2d %2d %2d %2d\n",n5,n6,n7,n8);
    printf("%2d %2d %2d %2d\n",n9,n10,n11,n12);
    printf("%2d %2d %2d %2d\n",n13,n14,n15,n16);
    printf("\n");

    rs1=n1+n2+n3+n4;
    rs2=n5+n6+n7+n8;
    rs3=n9+n10+n11+n12;
    rs4=n13+n14+n15+n16;

    cs1=n1+n5+n9+n13;
    cs2=n2+n6+n10+n14;
    cs3=n3+n7+n11+n15;
    cs4=n4+n8+n12+n16;

    ds1=n1+n6+n11+n16;
    ds2=n4+n7+n10+n13;

    printf("Row sums: %d %d %d %d\n",rs1,rs2,rs3,rs4);
    printf("Column sums: %d %d %d %d\n",cs1,cs2,cs3,cs4);
    printf("Diagonal sums: %d %d",ds1,ds2);
    return 0;
}