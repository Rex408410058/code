#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    double km;
    km = (double)a * 1.6;

    printf("%.1lf\n", km);

    return 0;
}