#include <stdio.h>
#include <stdarg.h>
#include  "variadic_functions.h"
/**
 *sum_them_all()
 *@ap: arguement parameter
 *@args:number of arguement
 *@va_list: type for iterating arguement
 *@va_start: arguement with a va_list
 *@va_end: free a va_list
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0, sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	va_end(ap);
	return (sum);
}
/**
 * main - print the value
 *
 *Return: Always 0
 */
int main()
{
	printf("%d\n", add());
	return (0);
}
