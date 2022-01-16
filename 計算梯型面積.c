#include <stdio.h>

int main()
{
    float top, end, high;
    scanf("%f %f %f", &top, &end, &high);

    float area = 0;
    
    area = ((top + end) * high / 2);

    printf("Trapezoid area:%.1f\n", area);
    
    return 0;
}