#include <stdio.h>
#include <stdlib.h>
 
int main()
{   
    char str[1024];
    while(scanf("%s", str) != EOF)
    {
        int pa = 1;
        
        int str_size = strlen(str);
        
        for(int i = 0; i < str_size; i++)
        {
            if(str[i] != str[str_size-1-i])
            {
                pa = 0;
                break;
            }
        }
        
        if(pa)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
