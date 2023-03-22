#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character is to be checked
 * Return : 1 for lowercased or 0 for anything else
 */

int _islower(int f)

{
	if (f >= 97 && f <= 122)
	{
	return (1);
	}
	return (0);
}
