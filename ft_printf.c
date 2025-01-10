/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:32:46 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/10 14:36:48 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *fmt, ...)
{
	va_list	ap;
	char	*s;
	int	char_print = 0;

	s = (char *)fmt;

	print(s);
	
	//void va_start(va_list ap, last);
	va_start(ap, fmt);
	
	//type va_arg(va_list ap, type);
	printf("\n\nF s1 is ==%s==\n\n", va_arg(ap, char *));
  	printf("F s2 is ==%s==\n\n", va_arg(ap, char *));
    	printf("F s3 is ==%s==\n\n", va_arg(ap, char *));

        va_end(ap);	
	return char_print;
}

int main(int argc, char **argv)
{
	(void) argc;
	//(void) argv;

	//TEST1
 printf("\n\n===\nTEST1\n===\n\n");
 printf("printf    ---->       ");
 printf("Hello Worldd\n");
 printf("ft_printf ---->       ");
 ft_printf("Hello world\n", argv[1], argv[2], argv[3]);


        // //TEST2
        // printf("\n\n===\nTEST2\n===\n\n");
        // printf("printf is ---->       ");
        // printf(" ");

        // printf("ft_printf is ---->       ");
        // ft_printf(" ");


        // //TEST3
        // printf("\n\n===\nTEST3\n===\n\n");
        // printf("printf is ---->       ");
        // printf("%");

        // printf("ft_printf is ---->       ");
        // ft_printf("%");


	// //TEST4
        // printf("\n\n===\nTEST4\n===\n\n");
        // printf("printf is ---->       ");
        // printf("");

        // printf("ft_printf is ---->       ");
        // ft_printf("");


	// //TEST5
        // printf("\n\n===\nTEST5\n===\n\n");
        // printf("printf is ---->       ");
	// printf(argv[1], argv[2], argv[3]);

        // printf("ft_printf is ---->       ");
	//ft_printf(argv[1], argv[2], argv[3], argv[4]);
	
	return 0;
}
