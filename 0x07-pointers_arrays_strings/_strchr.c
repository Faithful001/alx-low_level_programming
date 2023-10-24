#include "main.h"
#include <stddef.h> 
#define NULL 0

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of the character c in s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}

	if (c == '\0') // Special case for searching for a null character
		return s;

	return NULL;
}

