/**
 * _strlen - Function that return the size of a string
 * @s: input pointer to a string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
}
