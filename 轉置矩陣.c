#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int arr[128][128];  
    int N, M;  
  
    scanf("%d %d", &N, &M);  
      
    if(N == 0 || M == 0)  
        return -1;  
  
    for(int i = 0; i < N; i++)  
    {  
        for(int j = 0; j < M; j++)  
        {  
            scanf("%d", &arr[i][j]);  
            //printf("%d ", arr[i][j]);  
        }  
        //printf("\n");  
    }  
  
    int transpose[128][128];  
    for(int i = 0; i < M; i++)  
    {  
        for(int j = 0; j < N; j++)  
        {  
            transpose[i][j] = arr[j][i];  
            if(j != 0)  
                printf(" ");  
            printf("%d", transpose[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}  