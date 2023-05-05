#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @binary: binary number.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int length = 0, base = 1;

	if (!binary)
	{
		return (0);
	}
	while (binary[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		if (binary[length] != '0' && binary[length] != '1')
		{
			return (0);
		}
		if (binary[length] & 1)
		{
			result += base;
		}
		length--;
		base *= 2;
	}
	return (result);
}
