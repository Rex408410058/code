#include<stdio.h>

int power(int num, int exp)
{
    if(exp == 0)
        return 1;
    else
        return num * power(num, exp - 1);
}

int main()
{
    int m, n;

    while(scanf("%d %d", &m, &n) != EOF)
    {
        printf("%d\n", power(m, n));
    }
    return 0;
}