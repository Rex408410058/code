#include <stdio.h>  
  
int main()  
{  
    int arr[100];  
    int counter = 0;  
    for(counter = 0; counter < 100; counter++)  
    {  
        int returnValue = scanf("%d", &arr[counter]);  
        if(returnValue == EOF)  
            break;  
    }  
  
    /*for(int i = 0; i < counter - 1; i++) 
    { 
        printf("%d", arr[i]); 
        printf(" "); 
    } 
    printf("%d\n", arr[counter - 1]);*/  
  
    //進行反轉  
    int index = counter - 1;  
    for(int element = 0; element < index; element++)  
    {  
        int tmp = arr[element];  
        arr[element] = arr[index];  
        arr[index] = tmp;  
        index--;  
    }  
      
    //顯示反轉後的陣列  
    for(int element = 0; element < counter - 1; element++)  
    {  
        printf("%d", arr[element]);  
        printf(" ");  
    }  
    printf("%d\n", arr[counter - 1]);  
      
    return 0;  
      
}  