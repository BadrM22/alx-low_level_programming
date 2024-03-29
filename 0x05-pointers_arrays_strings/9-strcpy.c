/**
 * _strcpy - function that copies a string to another pointer
 * @dest: input pointer to a string
 * @src: input string to be copied
 *
 * Return: char
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
