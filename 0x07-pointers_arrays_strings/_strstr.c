#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		j = 0;

		while (haystack[i] == needle[j])
		{
			i++;
			j++;

			if (needle[j] == '\0')
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

