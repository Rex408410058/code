#include <stdio.h>

int main()
{
    long long int a;
    while(~scanf("%lld", &a))
    {
        if(a <= 31)
            printf("%d\n", 1 << a);
        else
            printf("Value of more than 31\n");
    }

    return 0;
}