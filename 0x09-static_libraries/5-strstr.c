#include "main.h"
#define NULL 0
/**
 * _strstr - used to locate and return pointer to first occurence of sunstring
 *
 * @haystack: string to search
 *
 * @needle: target substring to search
 *
 * Return: pointer to index of sring of first occurence.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, y, x;
	
	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = 1;
			y = 0;

			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
				{
					x++;
					y++;
				}
				else
				{
					break;
				}				
				if (needle[y] == '\0')
				{
					return (haystack + i);
				}
			}
			i++;
		}
		return (NULL);
	}
}
