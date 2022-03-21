#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strlen - return len of a sring
*
*@s: points at string
*Return: always 0
*/
int _strlen(char *s)
{
len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
