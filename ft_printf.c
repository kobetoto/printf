#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *fmt, ...)
{
        va_list ap;
        int     nbr_arg = 0;
        int     i = 0;
        char    *s = (char *)fmt;

        va_start(ap, fmt);

        //Each call to va_arg() modifies ap so that the next call returns the next argument.
        while(i < 3)
        { 
        s = va_arg(ap, char *);
        printf("s is ==%s==\n\n", s);
        nbr_arg--;
        i++;
        }
        va_end(ap);     
        return nbr_arg;
}

int main(int argc, char **argv)
{
        (void) argc;

        //char *s1 = "test";
        //char *s2 = "testtttt";

        //printf("printf is ==%s==\n", argv[1]);
        ft_printf(argv[1], argv[2], argv[3]);
        return 0;
}
