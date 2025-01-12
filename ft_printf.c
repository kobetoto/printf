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

int ft_printf(const char *fmt, ...)
{
	va_list	ap;
	char	*s;
	int	char_print = 0;

	s = (char *)fmt;
	
	//void va_start(va_list ap, last);
	va_start(ap, fmt);
	//type va_arg(va_list ap, type);
	//printf("\n\nF s1 is ==%s==\n\n", va_arg(ap, char *));
	//printf("F s2 is ==%s==\n\n", va_arg(ap, char *));
	//printf("F s3 is ==%s==\n\n", va_arg(ap, char *));

	print(s, ap);
	va_end(ap);	
	return char_print;
}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

/*
	char	*name = "Kobe";
	
	//TEST1
	printf("\n\n===\nTEST1\n===\n\n");
	
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
	printf("");
	printf("===");
	
	printf("\n");
	
	printf("MY ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("");
	printf("===");


	//TEST3
	printf("\n\n===\nTEST3\n===\n\n");
	
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
        printf("\n\n===\nTEST3\n===\n\n");

        printf("printf is       ---->       ");
        printf("===");
        printf("42");
        printf("===");

        printf("\n");

        printf("MY ft_printf is ---->       ");
        printf("===");
        fflush(stdout);
        ft_printf("42");
        printf("===");


	//TEST5
	printf("\n\n===\nTEST4\n===\n\n");
	
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
*/

	//TEST5
	printf("\n\n===\nTEST5\n===\n\n");
	printf("printf is ---->       ");
	printf("===");
	printf("%s %s %s",argv[1], argv[2], argv[3]);
	printf("===");

	printf("\n");

	printf("ft_printf is ---->       ");
	printf("===");
	fflush(stdout);
	ft_printf("TEST ARG:::: ",argv[1], argv[2], argv[3], argv[4]);
	printf("===");

	return 0;
}
