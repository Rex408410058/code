#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d-%d=%d\n", a, b, a - b);

    if(a % b >= 0)
    {
        printf("%d/%d=%d...%d\n", a, b, a / b, a % b);
    }
    else
    {
        int x = a / b;
        if(x < 0)
            x -= 1;
        else
            x += 1;
        printf("%d/%d=%d...%d\n", a, b, x, a - b * x);
    }
    return 0;
}