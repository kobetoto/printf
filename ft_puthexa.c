/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:01:24 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/14 14:33:06 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t ft_puthexa(const unsigned int nb)
{
        size_t i;

        i = 0;
        if (nb / 16)
        {
                ft_putnbr(nb / 16);
                ft_putnbr(nb % 16);
        }
        else
        {
                ft_putchar(nb - 10 + 'a');
                i++;
        }
	return i;
}
