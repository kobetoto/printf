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
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *fmt, ...);
size_t ft_putchar(char c);
size_t ft_putstr(const char *s);
size_t ft_putnbr(int n);
