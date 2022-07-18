/**
 * _strchr - Function that locates a character in a string
 * @s: input string to search in
 * @c: character to search for in @s
 *
 * Return: char Pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if ((int) *s == (int) c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
