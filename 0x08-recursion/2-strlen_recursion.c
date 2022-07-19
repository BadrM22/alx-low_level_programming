/**
 * _strlen_recursion - Funtionc to find the length of a string
 * @s: input string to find it's length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
