/**
 * _isalpha - Function to check for alphabet
 * @c: input char to check
 *
 * Return: 1 if alphabet else return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
