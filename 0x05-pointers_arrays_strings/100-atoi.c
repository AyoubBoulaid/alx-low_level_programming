#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, w, e, len, r, num;

	q = 0;
	w = 0;
	e = 0;
	len = 0;
	r = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && r == 0)
	{
		if (s[q] == '-')
			++w;
		if (s[q] >= '0' && s[q] <= '9')
		{
			num = s[q] - '0';
			if (w % 2)
				num = -num;
			e = e * 10 + num;
			r = 1;
			if (s[q + 1] < '0' || s[q + 1] < '9')
				break;
			r = 0;
		}
		q++;
	}
	if (r == 0)
		return (0);
	return (e);
}
