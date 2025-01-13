/*
HEADER 42
*/
#include "ft_printf.h"

size_t ft_putstr(const char *s)
{
    if(!s)
        return (write(1, "(null)", 6));
    int i;

    i = 0;
    while (s[i])
    {
    (write(1,&s[i],1));
    i++;
    }
    return ((size_t) i);
}
