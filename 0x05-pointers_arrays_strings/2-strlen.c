#include "main.h"
/**
 * _strlen -
 * @s: a pointer variable
 */
int _strlen(char *s)
{
int i = 0;
while(s[i] != 0)
i++;
return (i + 1);
}
