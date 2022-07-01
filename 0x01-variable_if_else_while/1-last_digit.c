#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * @n - stored a random number
 *
 * return (0)  (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
