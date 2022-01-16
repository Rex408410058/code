#include <stdio.h>

int main()
{
    int a, b;
    while(~scanf("%d %d", &a, &b))
    {
        int total = 0;
        total = a + b;
        printf("%d\n", total * total);
    }

    return 0;
}