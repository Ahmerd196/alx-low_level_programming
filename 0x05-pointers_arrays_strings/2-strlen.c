#include "main.h"
/**
 * _strlen - return the lenght of a string.
 *
 * @s:string input value
 *
 * Return : lenght of a string;
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
