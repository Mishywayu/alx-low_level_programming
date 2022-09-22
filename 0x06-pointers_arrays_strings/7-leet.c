#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @s: pointer to string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char letters[] = "aAeEoOtTlL";
	char Num[] = "4433007711";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;

		while (leetCount < 10)
		{
			if (letters[leetCount] == s[stringCount])
			{
				s[stringCount] = Num[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
