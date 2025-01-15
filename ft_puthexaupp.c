/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:11:46 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/15 12:53:18 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	ft_puthexaupp(const unsigned int nb)
{
	size_t	i;

	i = 0;
	if (nb / 16)
		i += ft_puthexaupp(nb / 16);
	if (nb % 16 < 10)
		i += ft_putchar((nb % 16) + '0');
	else
		i += ft_putchar((nb % 16) - 10 + 'A');
	return (i);
}
