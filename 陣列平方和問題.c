#include<stdio.h>
#include<string.h>

int main()
{
    double arr[11];
    double total = 0;
    double idx = 0;

    for(int i = 0; i < 11; i++)
    {
        scanf("%lf", &arr[i]);
        idx++;
    }

    for(int i = 0; i < idx; i++)
    {
        total += arr[i] * arr[i];
    }

    printf("%.6lf\n", total);

    return 0;
}