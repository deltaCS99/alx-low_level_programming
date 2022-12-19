#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
    int i;
    int len = strlen(str);
   // printf("%d", len);
    if(len == 1)
    {
        printf("%s\n", str);
    }
    else
    {
        
        for(i = 0 ; i < len; i++)
        {
           
          printf("%c", str[i]);
           i +=1;
        }
    }
}
