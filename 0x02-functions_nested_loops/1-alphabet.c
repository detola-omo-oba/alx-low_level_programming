#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)

	{
		putchar(print_alphabet);
	}

	putchar('\n');

	print_alphabet();

	return (0);

}
