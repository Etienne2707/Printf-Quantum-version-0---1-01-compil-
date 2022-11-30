/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: educlos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:22:16 by educlos           #+#    #+#             */
/*   Updated: 2022/11/30 18:27:17 by educlos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_printf(char *str, ...)
{
    int i;
    va_list args;
    va_start (args, str);

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '%')
        {
            write(1, &str[i], 1);
            i++;
        }
        else
        {
            ft_parser(str[i + 1], args);
            i++;
            i++;
        }
    }
    va_end(args);
    
}

int main()
{
    int a = 12;
    ft_printf("Etienne%dleplus%sbeau", a, "THOMAS");
    return(0);
}