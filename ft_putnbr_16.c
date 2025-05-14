/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:09:11 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 21:23:14 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_16(unsigned long n, char letter)
{
	char	*basemin;
	char	*basemaj;

	basemin = "0123456789abcdef";
	basemaj = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putnbr_16(n / 16, letter);
	}
	if (letter == 'p' || letter == 'x')
	{
		ft_putchar(basemin[n % 16]);
	}
	else if (letter == 'X')
	{
		ft_putchar(basemaj[n % 16]);
	}
}
