/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:09:11 by britela-          #+#    #+#             */
/*   Updated: 2025/05/13 23:30:26 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_16(unsigned long n)
{
	char	*basemin;
	char	*basemaj;
	int	i;

	i = 0;
	basemin = "0123456789ABCDEF";
	basemaj = "0123456789abcdef";

	if (n >= 16)
	{
		ft_putnbr_16(n / 16);
	}
	ft_putchar(basemin[n % 16]);
}
