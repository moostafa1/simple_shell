#include "shell.h"


/**
 * _strlen - gets the string length
 * @s: pointer to a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}




/** _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 when strings are similar, diff. bet string letters when differs.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == '\0')
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (*(s1 + i) - *(s2 + i));
	}
	return 0;
}





