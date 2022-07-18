/**
 * _memset - fill a byte string with a byte value.
 * @s: input string to be filled
 * @b: char byte to be filled in @s
 * @n: number for bytes in @s ti be filled with @b
 *
 * Retrun: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
