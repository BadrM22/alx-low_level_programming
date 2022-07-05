/**
 * _islower - Function to check if a char is lowercase or uppercase
 * @c: char to be checked
 *
 * Return: return 1 if lowercase else 0 if uppercase.
 */

int _islower(int c)
{
	if (c > 65 && c > 90)
	{
		return (1);
	}
	return (0);
}
