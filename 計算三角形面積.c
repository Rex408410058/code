#include <stdio.h>

int main()
{
    float ground, high;
    scanf("%f %f", &ground, &high);
    if(ground <= 0 || high <= 0)
        return 0;

    float area = 0;
    
    area = (ground * high / 2);

    printf("%.1f\n", area);
    
    return 0;
}