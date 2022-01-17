#include <stdio.h>  
  
int main()  
{  
    int arr[1024];  
    int total = 0;  
  
    for(int i = 0; i < 1024; i++)  
    {  
        int returnValue = scanf("%d", &arr[i]);  
        if(returnValue == EOF)  
            break;  
        total += arr[i] * arr[i] * arr[i];  
    }  
  
    printf("%d\n", total);  
  
    return 0;  
}  