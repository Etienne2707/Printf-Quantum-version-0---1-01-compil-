/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:06:59 by educlos           #+#    #+#             */
/*   Updated: 2022/11/30 18:15:21 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_parser(char c, va_list args)
{
    if (c == 'c')
        ft_putchar(va_arg(args, int));
    if (c == 's')
        ft_putstr(va_arg(args, char *));
    if (c == 'd')
        ft_putnbr(va_arg(args, int));
    if (c == 'u')
        ft_putnbrabs(va_arg(args, unsigned int));
    if (c == 'x')
        ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
    if (c == 'X')
        ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
    if (c == '%')
        write(1, "%" , 1);
    return 1;
}