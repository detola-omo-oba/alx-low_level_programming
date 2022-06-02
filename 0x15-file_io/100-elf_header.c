#include "main.h"
#include <stdio.h>

/**
 * main - entry point for program
 * @argc: count of arguments
 * @argv: pointer to array
 * Return: 1
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
