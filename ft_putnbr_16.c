/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:09:11 by britela-          #+#    #+#             */
/*   Updated: 2025/05/13 20:27:21 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putnbr_16(unsigned long n)
{
	char	*basemin;
	char	*basemaj;

	basemin = "0123456789ABCDEF";
	basemaj = "0123456789abcdef";

	if (n >= 16)
	{
		i = i + ft_putnbr_16(n / 16);
	i = i + ft_putchar(basemin[n % 16]);

	return (i);
}
