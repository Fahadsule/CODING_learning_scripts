#include <stdio.h>
int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter the value for height: ");
    scanf("%d",&height);
    printf("Enter the value for length: ");
    scanf("%d",&length);
    printf("Enter the value for width: ");
    scanf("%d",&width);
    volume=height*length*width;
    weight=(volume+165)/166;
    printf("Volume(cubic inches) %d\n",volume);
    printf("Dimensional Weight(pounds) %d\n",weight);
    return 0;
}
