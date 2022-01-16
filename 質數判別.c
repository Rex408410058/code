#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
long long int prime(long long int n)
{
    if(n % 2 == 0 && n != 2)
        return 0;
    for(long long int i = 3; i*i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
 
int main()
{
    long long int n;
    while(scanf("%lld", &n) != EOF)
    {
        if(prime(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}