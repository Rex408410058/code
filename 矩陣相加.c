#include <stdio.h>
#include <string.h>
 
int main()
{
    int arr[128][128];
    int arr_1[128][128];

    int row, col;
    scanf("%d %d", &row, &col);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d %d", &row, &col);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr_1[i][j]);
        }
    }

    int sum[128][128];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum[i][j] = arr[i][j] + arr_1[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(j != 0)
                printf(" ");
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
