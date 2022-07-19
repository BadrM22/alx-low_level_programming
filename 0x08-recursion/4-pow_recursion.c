/**
 * _pow_recursion - Function that returns a power of a number
 * @x: int number
 * @y: power value
 *
 * Return: @x raised to power of @y if success else -1 if y is lower
 * than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
