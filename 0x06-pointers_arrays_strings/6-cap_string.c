#include "main.h"
/**
 * cap_string - function that changes all lowercase letters to uppercase
 * @s: parameter1
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int delt = 'a' - 'A';

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z') && (s[i - 1] == ' ') 
			|| (s[i - 1] == '\t') || (s[i - 1] == '\n') || (s[i - 1] == ',') 
			|| (s[i - 1] == ';') || (s[i - 1] == '.') || (s[i - 1] == '!') 
			|| (s[i - 1] == '?') || (s[i - 1] == '"') || (s[i - 1] == '(') 
			|| (s[i - 1] == ')') || (s[i - 1] == '{') || (s[i - 1] == '}'))
		{
            
			s[i] -= delt;
		}
		i++;
	}
	return (s);
}
