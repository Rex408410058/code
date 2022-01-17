#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main()
{   
    char str[256];
    int c;

    for(int i = 0; i < 26; i++)
    {
        str[i] = 0;
    }

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z')
        {
            str[c - 'a']++;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            str[c - 'A']++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(i != 0 && i != 26)
            printf(" ");
        printf("%d", str[i]);
    }
    printf("\n");

    return 0;
}
