#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if(N <= 0 && N > 20)
        return 0;

    float arr[N];
    float idx = 0;

    for(int i = 0; i < N; i++)
    {
        int returnValue = scanf("%f", &arr[i]);
        if(returnValue == EOF)
            break;
        idx++;
    }

    float maxnum = arr[0];
    float minnum = arr[0];

    for(int i = 0; i < idx; i++)
    {
        if(arr[i] > maxnum)
        {
            maxnum = arr[i];
        }
        if(arr[i] < minnum)
        {
            minnum = arr[i];
        }
    }


    printf("%.2f\n%.2f\n", maxnum, minnum);


    return 0;
}