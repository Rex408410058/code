#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int prime(int n)
{
    if(n % 2 == 0 && n != 2)
        return 0;
    for(int i = 3; i*i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
 
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int min = 0;
        if(n > 2)
        {
            for(int i = n-1; i >= 0; i--)
            {
                if(prime(i))
                {
                    min = i;
                    break;
                }
            }
            printf("%d\n", min);
        }
    }
 
    return 0;
}