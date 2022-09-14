#include "main.h"
/**
 *
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	print_alphabet();
	return (0)
}
#include "1-main.c"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
