#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
int i;
int j;
char data[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data[j])
{
s[i] = datarot[j];
}
}
}
return (s);
}
