#include "main.h"
/**
 * _isalpha - checks for lowercase
 * Return: Result
 * parameter: integer
 * @c: parameter
 */
int _isalpha(int c)
{
int result;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
result = 1;
else
result = 0;
return (result);
}
