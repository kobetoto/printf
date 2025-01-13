/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:32:46 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/12 14:34:03 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/*
    void va_start(va_list ap, last);
    type va_arg(va_list ap, type);
    void va_end(va_list ap);
*/

/*
on parcourt la chaine 
si % alors put_arg(str+i, &i, &ap)
	si == 'c' 
sinon putchar()
*/

static size_t   put_arg(const char *c, size_t *i, va_list *ap)
{
	*i = *i + 1;

    if(*(c + 1) == 'c')
        return (ft_putchar((char) va_arg(*ap, int))); 
	else if(*(c + 1) == 's')
        return (ft_putstr(va_arg(*ap, const char *))); 
	else if(*(c + 1) == 'i')
        return (ft_putnbr(va_arg(*ap, int))); 
    else 
        return (-1);
}

int ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t i;
	int	char_print;

	if(!str)
		return (-1);
	
	i = 0;
	char_print = 0;
	va_start(ap, str);

	while(str[i])
	{
		if (str[i] == '%')
			char_print = put_arg(str + i, &i, &ap);
		else 
			char_print = ft_putchar(str[i]);
		i++;
	}
	va_end(ap);	

	return char_print;
}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;


	char	*name = "Kobe";
	
	//TEST1
	printf("\n\n===\nTEST1:: string\n===\n\n");
	
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
	printf("\n\n===\nTEST2\n===\n\n");
	
	printf("printf is       ---->       ");
	printf("===");
	printf(" ");
	printf("===");
	
	printf("\n");
	
	printf("MY ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("");
	printf("===");


	//TEST3
	printf("\n\n===\nTEST3:: double pourcent\n===\n\n");
	
	printf("printf is       ---->       ");
	printf("===");
	printf("%%");
	printf("===");
	
	printf("\n");
	
	printf("MY ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("%%");
	printf("===");

	//TEST4
	printf("\n\n===\nTEST4:: string as arg\n===\n\n");
	
	printf("printf is ---->       ");
	printf("===");
	printf("Hello World %s!", name);
	printf("===");
	
	printf("\n");
	
	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("Hello World %s!", name);
	printf("===");

	//TEST5
	printf("\n\n===\nTEST5:: integer as arg\n===\n\n");
	
	printf("printf is ---->       ");
	printf("===");
	printf("%i + %i = %i", 4, 20, (20+4));
	printf("===");
	
	printf("\n");
	
	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("Hello World %s!", name);
	printf("===");

	//TEST5
	printf("\n\n===\nTEST5:: argv...\n===\n\n");
	printf("printf is    ---->       ");
	printf("===");
	printf("TEST ARG:::: %s %s %s",argv[1], argv[2], argv[3]);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("TEST ARG:::: %s %s %s",argv[1], argv[2], argv[3], argv[4]);
	printf("===");

	printf("\n");
	return 0;
}
