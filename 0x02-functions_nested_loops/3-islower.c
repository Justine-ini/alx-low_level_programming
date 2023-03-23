#include "main.h"
/**int _islower - Write a function that checks for lowercase character.
 *
 * Returns: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
