/**
 * sqrt2 - functino to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to a
 *
 * Return: 1 on success else -1
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - function to get natural square root of n
 * @n : Integer number
 *
 * Return: 1 on success else -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
