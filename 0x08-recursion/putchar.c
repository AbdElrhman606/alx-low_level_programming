#include <unistd.h>

/**
 *
 * write char s
 *
 */

int _putchar(char c)
{
    return (write(1, &c, 1));

}
