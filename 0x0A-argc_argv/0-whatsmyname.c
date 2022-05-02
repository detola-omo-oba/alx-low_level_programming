#include <stdio.h>
/**
 * main - entry point
 * @argc: count of args present
 * @argv: array of char
 * Return: akways 0
 */

int main(int argc, char *argv[])
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
