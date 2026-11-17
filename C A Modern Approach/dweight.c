#include <stdio.h>
int main(void)
{
    int height,legnth,width,volume,weight;
    height=10;
    legnth=7;
    width=2;
    volume=height*legnth*width;
    weight=(volume+165)/166;
    printf("Dimensions: %dx%dx%d\n", legnth, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}

