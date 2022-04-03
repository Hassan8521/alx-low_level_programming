#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - checks args
 *
 *@argc: represent arguement count
 *
 *@argv: repreent arguement vector
 *
 *Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("argv[%s\n]", argv[0]);
	return (0);
}
