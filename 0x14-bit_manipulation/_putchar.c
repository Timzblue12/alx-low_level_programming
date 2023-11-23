#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: prints character
 *
 * Return: character 1 on success
 * character -1 is returned, and errno is set on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
