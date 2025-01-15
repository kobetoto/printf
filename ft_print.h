/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:14:19 by thodavid          #+#    #+#             */
/*   Updated: 2025/01/15 13:36:38 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *fmt, ...);

size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *s);
size_t	ft_putnbr(const int nb);
size_t	ft_unsputnbr(const unsigned int nb);
size_t	ft_puthexa(const unsigned int nb);
size_t	ft_puthexaupp(const unsigned int nb);
size_t	ft_printaddr(const unsigned int nb);
size_t	ft_putadress(void *adress);

#endif
