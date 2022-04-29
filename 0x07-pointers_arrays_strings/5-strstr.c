#include <stdio.h>
#include "main.h"

/**
 * _strstr - that locates a substring
 * @haystack: argument
 * @needle: argument
 * 
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
    int i = 0, j = 0, k = 0;
    char *x =  NULL;

        for (k = 0; needle[k] != '\0'; k++)
        {
         if (haystack[k] == needle[k])
         {
             x[i] = haystack[k];
             i++; 
         }   
         else
         {
             continue;
         }
        }
}