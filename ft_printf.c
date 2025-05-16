/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:48:09 by britela-          #+#    #+#             */
/*   Updated: 2025/05/16 17:59:28 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_char(const char *format, va_list args, int i)
{
	int	cpt;

	cpt = 0;
	if (format[i + 1] == 'c')
		cpt = cpt + ft_putchar(va_arg(args, int));
	else if (format[i + 1] == 's')
		cpt = cpt + ft_putstr(va_arg(args, char *));
	else if (format[i + 1] == 'p')
		cpt = cpt + ft_putptr(va_arg(args, void *));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		cpt = cpt + ft_putnbr(va_arg(args, int));
	else if (format[i + 1] == 'u')
		cpt = cpt + ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
		cpt = cpt + ft_putnbr_16(va_arg(args, unsigned int), format[i + 1]);
	else if (format[i + 1] == '%')
		cpt = cpt + ft_putchar('%');
	return (cpt);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			cpt = cpt + ft_check_char(format, args, i);
			i = i + 2;
		}
		else
		{
			cpt = cpt + ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (cpt);
}
