/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:48:09 by britela-          #+#    #+#             */
/*   Updated: 2025/05/13 20:06:53 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	verif(char format, va_list args)
{
	if (format == 'c')
	{
		ft_putchar(va_arg(args, int));
	}
	else if (format == 's')
	{
		ft_putstr(va_arg(args, char *));
	}
	else if (format == 'd' || format == 'i')
	{
		ft_putnbr(va_arg(args, int));
	}	
	else if (format == 'p')
	{
		ft_putptr(va_arg(args, void *));
	}
	return (0);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_start(args, format);//initialiser des la lecture ...
	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			verif(format[i + 1], args);
			i = i + 2;
			len ++;
		}
		else
		{
			ft_putchar(format[i]);
			i++;
			len ++;
		}
	}
	va_end(args);
	return (len); 
}
