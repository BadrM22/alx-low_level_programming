/**
 * factorial - Function that returns the factorial ofa number
 * @n: integer number
 *
 * Return: int if success else -1 if fails
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
