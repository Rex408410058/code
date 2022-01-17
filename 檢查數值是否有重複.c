#include <stdio.h>
#include <stdlib.h>
 
int main()
{   
    int N;
    scanf("%d", &N);
    int arr[N];
    int counter = 0;

    for(int i = 0; i < N; i++)
    {
        int returnValue = scanf("%d", &arr[i]);
        if(returnValue == EOF)
            break;
    }

    for(int i = 0; i < N; i++)
    {
        counter = 0;
        for(int j = 0; j < N; j++)
        {
            if(arr[i] == arr[j])
                counter++;
            else if(counter > 1)
                break;
        }
        if(counter > 1)
            break;
    }

    if(counter > 1)
        printf("0\n");
    else
        printf("1\n");

    return 0;
}
