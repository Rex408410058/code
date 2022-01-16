#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n = 0;
    long long int ret = 1;
    scanf("%lld", &n);
    if(n > 0 && n < 20)
    {
        for(int i = 1; i <= n; i++)
        {
            ret *= i;
        }
        printf("%lld\n", ret);
    }

    return 0;
}