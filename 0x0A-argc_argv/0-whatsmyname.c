#include <stdio.h>
#include <stdlib.h>
/**
 *main - write program that prints its name, followed by new line
 *
 *@argc: arguement count
 *
 *@argv: represent arguement vector
 *
 *Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
