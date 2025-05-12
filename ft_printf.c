/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:48:09 by britela-          #+#    #+#             */
/*   Updated: 2025/05/12 23:35:05 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

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
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			ft_putchar(va_arg(args, int));
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
