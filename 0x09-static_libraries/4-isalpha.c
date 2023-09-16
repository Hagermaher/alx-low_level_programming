#include "main.h"
/**
 * _isalpha - checker for alpabetic character
 * @c: character to be chick
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
