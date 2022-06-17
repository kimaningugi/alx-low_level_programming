#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * c - character to print
 * return 1 if success
 * return -1 if error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
