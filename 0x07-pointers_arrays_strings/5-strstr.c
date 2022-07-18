/**
 * _strstr - locates a substring
 * @haystack: input string to check for needle
 * @needle: substring to find in haystack
 *
 * Return: char Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
