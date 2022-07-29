#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isDigit(char *s);

int main(int ac, char *av[])
{
	int result;
	if ((ac - 1) != 2)
	{
		printf("Error\n");
		exit (98);
	}
	if (!isDigit(av[1]) || !isDigit(av[2]))
	{
		printf("Error\n");
		exit (98);
	}
	result = atoi(av[1]) * atoi(av[2]);
	printf("%d\n", result);
	return (0);
}
bool isDigit (char *s)
{
	int i;
	i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return false;
		}
		i++;
	}
	return true;
}
