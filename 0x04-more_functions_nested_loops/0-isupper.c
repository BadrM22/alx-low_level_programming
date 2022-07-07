/**
 * _isupper - Function to check if a character is uppercase.
 * @c: input character to check
 *
 * Return: 1 if @c is uppercase else 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
