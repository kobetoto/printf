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
size_t ft_puthexa(const unsigned int nb)
{
    size_t i = 0;

    if (nb / 16) // Si nb >= 16, on continue la division
        i += ft_puthexa(nb / 16);

    if ((nb % 16) < 10) // Chiffres 0-9
        i += ft_putchar((nb % 16) + '0');
    else // Lettres a-f
        i += ft_putchar((nb % 16) - 10 + 'a');

    return i;
}
