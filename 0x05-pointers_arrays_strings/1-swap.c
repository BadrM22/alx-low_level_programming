/**
 * swap_int - function to swap the value of two integers
 * @a: input for first integer
 * @b: input for second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
