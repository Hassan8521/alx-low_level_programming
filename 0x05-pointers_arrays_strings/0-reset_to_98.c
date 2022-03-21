#include "main.h"
#include <stdio.h>
/**
 * main - Points at int and updates the value its pointing to 98. 
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 402, *p = &n;
printf("%d\n", *p);
*p = 98;
printf("%d\n", n);
return (0);
}
