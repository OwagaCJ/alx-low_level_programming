#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: first string
 * @accept: second string
 * Return: the length of the string
 */
unsigned int _strspn(char *s, char *accept)
{

	int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
			}
			j++;
		}
		j = 0;
		i++;

		if (s[i] == ' ')
		{
			break;
		}
	}

	return (count);
}
