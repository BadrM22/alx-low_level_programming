/**
 * print_line - Function to print '_' n times.
 * @n: input number
 *
 * Description: print '_' n times where @n is the input
 * count for repetition.
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
