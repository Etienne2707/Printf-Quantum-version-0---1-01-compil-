/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:32:24 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/30 18:19:24 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>

int     ft_parser(char c, va_list args);
void    ft_printf(char *str, ...);
void	ft_putchar(char c);
int	    ft_strlen(char *str);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nb);
int	    error(char *str);
void	ft_putstr(char *str);
void	ft_putnbrabs(int nb);


#endif
