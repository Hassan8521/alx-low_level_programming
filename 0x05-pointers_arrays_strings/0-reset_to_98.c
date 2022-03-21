#include <stdio.h>
#include "main.h"
/**
 *main - takes pointer to an int as parameter and updates the value
 *
 *Return: Always 0;
*/
int main(void)
{
int n = 402;
int *p;
p = &n;
_putchar("%d\n" * p);
*p = 98;
_putchar("\%dn" * p);
return (0);
}
