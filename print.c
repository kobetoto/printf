/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:09:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/12 14:28:59 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void print(char *s, va_list list)
{
	int	i;
	i = 0;
	if(s == NULL)
		return;
	printf("\n\nF s1 is ==%s==\n\n", va_arg(list, char *));
        printf("F s2 is ==%s==\n\n", va_arg(list, char *));
        printf("F s3 is ==%s==\n\n", va_arg(list, char *));

	while(s[i])
	{
		if(s[i] == '%' && s[i+1] == '%')
			i++;
		
/*
		else if(s[i] == '%' && s[i+1] == 'c')
			ft_putchar(arg[1]);

  		else if(s[i] == '%' && s[i+1] == 's')
                        place_holder_char();
                else if(s[i] == '%' && s[i+1] == 'p')
                        place_holder_char();
                else if(s[i] == '%' && s[i+1] == 'd')
                        place_holder_char();
                else if(s[i] == '%' && s[i+1] == 'i')
                        place_holder_char();
                else if(s[i] == '%' && s[i+1] == 'x')
                        place_holder_char();
		else if(s[i] == '%' && s[i+1] == 'X')
                        place_holder_char();
*/
		write(1,&s[i],1);
		i++;
	}
}
