#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    if(a <= 0)
        return 0;

    double area;
    area = a * a + 0.05;

    printf("%.1lf\n", area);

    return 0;
}