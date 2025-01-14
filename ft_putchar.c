/*
HEADER 42
*/
#include "ft_printf.h"

size_t ft_putchar(const char c)
{
    return (write(1,&c,1));
}
