#include <stdio.h>
/**
 *main - entry point
 *Return: ALways 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", Sizeof(char));
	printf("Size of an int: %d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
