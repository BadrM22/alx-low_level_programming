/**
 * _strcpy - function to copy a string
 * @dest: input pointer to a string
 * @src: input string to be copied
 *
 * Returch: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
