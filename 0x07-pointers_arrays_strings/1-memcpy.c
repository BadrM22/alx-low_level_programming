/**
 * _memcpy - Function to copy n bytes to a string to another string
 * @dest: destination string
 * @src: source string to copy from
 * @n: number to bytes to copy
 *
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
