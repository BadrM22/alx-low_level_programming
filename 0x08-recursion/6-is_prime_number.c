/**
 * prime2 - function to evaluate from 1 to a
 * @a: same number as n
 * @b: number to iterate from 1 to a
 *
 * Return: int
 */

int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - function to chek if a number is a prime number
 * @n: number to check
 *
 * Return: 1 on success else -1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
