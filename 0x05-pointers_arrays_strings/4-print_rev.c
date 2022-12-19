#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void print_rev(char *s)
 {
     int len = strlen(s);
     int i;
     char* reversed =malloc(len + 1);
     
     for(i = 0 ; i < len; i++)
     {
        reversed[len-i-1] = s[i];
     }
    
     printf("%s\n",reversed);
 }
