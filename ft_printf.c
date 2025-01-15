/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:32:46 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/15 13:58:25 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
/*
   void va_start(va_list ap, last);
   type va_arg(va_list ap, type);
   void va_end(va_list ap);
*/

static size_t	ft_putarg(const char *c, size_t *i, va_list *ap)
{
	*i = *i + 1;
	if (*(c + 1) == 'c')
		return (ft_putchar((const char) va_arg(*ap, int)));
	else if (*(c + 1) == 's')
		return (ft_putstr(va_arg(*ap, const char *)));
	else if (*(c + 1) == 'p')
		return (ft_putadress(va_arg(*ap, void *)));
	else if (*(c + 1) == 'd')
		return (ft_putnbr(va_arg(*ap, const int)));
	else if (*(c + 1) == 'i')
		return (ft_putnbr(va_arg(*ap, const int)));
	else if (*(c + 1) == 'u')
		return (ft_unsputnbr(va_arg(*ap, const unsigned int)));
	else if (*(c + 1) == 'x')
		return (ft_puthexa(va_arg(*ap, const unsigned int)));
	else if (*(c + 1) == 'X')
		return (ft_puthexaupp(va_arg(*ap, const unsigned int)));
	else if (*(c + 1) == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	int		char_print;

	if (!str)
		return (-1);
	i = 0;
	char_print = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			char_print = ft_putarg(str + i, &i, &ap);
		else
			char_print = ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (char_print);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;


	char	*name = "Kobe";
	char	*name2 = "gigi";
	char 	*s = NULL;

	//TEST1
	printf("\n\n======\nTEST1:: string\n======\n");

	printf("printf       ---->       ");
	printf("===");
	printf("Hello World");
	printf("===");

	printf("\n");

	printf("MY ft_printf ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("Hello world");
	printf("===");


	//TEST2
	printf("\n\n======\nTEST2\n======\n");

	printf("printf is       ---->       ");
	printf("===");
	printf(" ");
	printf("===");

	printf("\n");

	printf("MY ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf(" ");
	printf("===");


	//TEST3
	printf("\n\n======\nTEST3:: double pourcent\n======\n");

	printf("printf is       ---->       ");
	printf("===");
	printf("%%%%");
	printf("===");

	printf("\n");

	printf("MY ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%%%%");
	printf("===");

	//TEST4
	printf("\n\n======\nTEST4:: string as arg\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("Hello %s!", name);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("Hello %s!", name);
	printf("===\n");

	printf("printf is    ---->       ");
        printf("===");
        printf("%s", s);
        printf("===");

        printf("\n");

        printf("ft_printf is ---->       ");
        printf("===");
        fflush(stdout);
        ft_printf("%s", s);
        printf("===");


	//TEST5
	printf("\n\n======\nTEST5:: %%i\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%i + %i = %i", 4, 20, (20+4));
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%i + %i = %i", 4, 20, (20+4));
	printf("===");

	//TEST6
	printf("\n\n======\nTEST6:: %%d\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%d // %d // %d", -4, 02, 24);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%d // %d // %d", -4, 02, 24);
	printf("===");

	//TEST7
	printf("\n\n======\nTEST7:: %%u\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%u // %u // %u", -4, 02, -24);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%u // %u // %u", -4, 02, -24);
	printf("===");

	//TEST8
	printf("\n\n======\nTEST8:: %%x\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%x", 2147483647);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%x", 2147483647);
	printf("===");

	printf("\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%x", 24);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%x", 24);
	printf("===");

	//TEST9
	printf("\n\n======\nTEST9:: %%X\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%X", 2147483647);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%X", 2147483647);
	printf("===");

	printf("\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%X", 12);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%X", 12);
	printf("===");


	//TEST10
	printf("\n\n======\nTEST10:: argv[...]\n======\n");
	printf("printf is    ---->       ");
	printf("===");
	printf("TEST ARG:::: %s %s %s",argv[1], argv[2], argv[3]);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("TEST ARG:::: %s %s %s",argv[1], argv[2], argv[3]);
	printf("===");

	printf("\n");

	//TEST11
	printf("\n\n======\nTEST11:: printf(0)\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf(0);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf(0);
	printf("===");
	printf("\n");


	//TEST11
	printf("\n\n======\nTEST11:: %%p\n======\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%p", name2);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%p", name2);
	printf("===");
	printf("\n");

	printf("printf is    ---->       ");
	printf("===");
	printf("%p", name);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%p", name);
	printf("===");
	printf("\n");


	printf("printf is    ---->       ");
        printf("===");
        printf("%p", NULL);
        printf("===");

        printf("\n");

        printf("ft_printf is ---->       ");
        printf("===");
        fflush(stdout);
        ft_printf("%p", NULL);
        printf("===");
        printf("\n");

	return 0;
}
*/
