#include<stdio.h>

void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    int idx = 0;

    for(int i = 0; i < N; i++)
    {
        int returnValue = scanf("%d", &arr[i]);
        if(returnValue == EOF)
            break;
        idx++;
    }

    for(int i = 0; i < idx; i++)
    {
        int min = i;
        for(int j = i+1; j < idx; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        if(i != min)
            swap(&arr[i], &arr[min]);
    }

    for(int i = 0; i < idx; i++)
    {
        if(i != idx && i != 0)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}