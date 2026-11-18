#include <stdio.h>
#include <math.h>
int main(void)
{
    float radius=10;
    float volume=(4.0f/3.0f)*(M_PI)*(radius*radius*radius);
    printf("Volume of sphere: %f\n",volume);
}