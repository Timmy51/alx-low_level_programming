#include <stdio.h>
/**
 * main - prints all letters of the alphabet except q and e
 * Return: Always 0 Success
 */

int main(void)
{       
char i;
for (i = 'a'; i <= 'z'; i++)
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);
}
