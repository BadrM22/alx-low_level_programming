#include "main.h"

/**
 * string_toupper - Function to change lowercase letters to uppercase
 * @s: string to be changed to upper
 *
 * Return: char pointer
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 122)
		{
			if (*(s + i) >= 97)
			{
				*(s + i) -= 32;
			}
		}
		i++;
	}
	return (s);
}
