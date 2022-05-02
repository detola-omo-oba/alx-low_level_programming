#include <stdio.h>
/**
 * main - entry point
 * @argc: count of args
 * @argv: array of char
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
