#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programme printing numbers using putchar
 * Return: 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
