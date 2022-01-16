#include <stdio.h>
#include <string.h>
 
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
        for(int j = 0; j < idx-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < idx; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
