/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:09:14 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 21:30:47 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	unsigned long	ptr2;

	ptr2 = (unsigned long)ptr;
	if (ptr == NULL)
	{
		return ;
	}
	write(1, "0x", 2);
	ft_putnbr_16(ptr2, 'p');
}
