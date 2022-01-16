#include<stdio.h>
#include<stdlib.h>
 
int gcd(int x, int y)
{
    while(y != 0)
    {
        int z = x % y;
        x = y;
        y = z;
    }
 
    return x;
}
 
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    printf("%d\n", gcd(m,n));
 
    return 0;
}