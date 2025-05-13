/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:48:09 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 00:12:44 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	verif(const char *format, va_list args, int i)
{
	if (format[i + 1] == 'c')
	{
		ft_putchar(va_arg(args, int));
	}
	else if (format[i + 1]  == 's')
	{
		ft_putstr(va_arg(args, char *));
	}
	else if (format[i + 1]  == 'p')
	{
		ft_putptr(va_arg(args, void *));
	}
	else if (format[i + 1]  == 'd' || format[i + 1]  == 'i')
	{
		ft_putnbr(va_arg(args, int));
	}	
	else if (format[i + 1] == 'u')
	{
		ft_putnbr_unsigned(va_arg(args, unsigned int)); 
	}
	else if (format[i + 1] == '%')
	{
		ft_putchar('%');
	}
	return (i + 2);
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
			verif(format, args, i);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (i); 
}
