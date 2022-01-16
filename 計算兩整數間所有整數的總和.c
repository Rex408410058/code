#include<stdio.h>
#include<stdlib.h>
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    int sum = 0;
    if(start > end)
    {
        for(int i = end; i <= start; i++)
            sum += i;
        printf("%d\n", sum);
    }
    else
    {
        for(int i = start; i <= end; i++)
            sum += i;
        printf("%d\n", sum);
    }
    return 0;
}