#include "main.h"

int check_palindrome_recursive(char *str, int left, int right);
int get_string_length(char *str);

/**
 * is_palindrome - prints palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome_recursive(s, 0, get_string_length(s)));
}

/**
 * get_string_length - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int get_string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_string_length(s + 1));
}

/**
 * check_palindrome_recursive - Checks characters recursively for palindrome.
 * @s: The string.
 * @left: The left index.
 * @right: The right index.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_palindrome_recursive(char *s, int left, int right)
{
	if (*(s + left) != *(s + right - 1))
	{
		return (0);
	}
	if (left >= right)
	{
		return (1);
	}
	return (check_palindrome_recursive(s, left + 1, right - 1));
}
