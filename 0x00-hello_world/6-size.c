#include <stdio.h>
/**
 * main -entry point
 *
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	printf("size of type int: %ld bytes\n", sizeof(int));
	printf("size of type int: %ld bytes\n", sizeof(char));
	printf("size of type int: %ld bytes\n", sizeof(float));
	printf("size of type int: %ld bytes\n", sizeof(long int));
	printf("size of type int: %ld bytes\n", sizeof(double));
	printf("size of type int: %ld bytes\n", sizeof(short int));
	printf("size of type int: %ld bytes\n", sizeof(signed char));
	printf("size of type int: %ld bytes\n", sizeof(long unsigned int));

	return (0);
}
