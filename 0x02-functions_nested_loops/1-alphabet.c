#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

}
