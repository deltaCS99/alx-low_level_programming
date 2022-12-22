#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void rev_string(char *s)
 {
     int len = strlen(s);
     int i,temp;
      for (i = 0; i < len/2; i++)  
    {  
        
        temp = s[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
    }  
 }
