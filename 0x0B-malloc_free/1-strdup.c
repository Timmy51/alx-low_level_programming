#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: a pointer variable
 * Return: a pointer variable
 */
char *_strdup(char *str)
{
int i, j;
char *str1;
if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;
str1 = malloc((i + 1) * sizeof(char));
if (str1 == NULL)
{
return (NULL);
}
for (j = 0; str[j]; j++)
{
str1[j] = str[j];
}
return (str1);
}
