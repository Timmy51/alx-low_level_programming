#include "main.h"
/**
 * _is_prime_number  - finds a prime number
 * @n: an integer variable n
 * Return: 1 or 0
 */
int _is_prime_number(int n)
{
if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
{
return (1);
}
else 
return (0);
}
