/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:09:14 by britela-          #+#    #+#             */
/*   Updated: 2025/05/13 20:12:20 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	i;
	unsigned long	ptr2;

	ptr2 = (unsigned long)ptr;
	i = 0;
	if (ptr == NULL)
	{
		return (0);
	}
	ft_putnbr_16(ptr2);
}
return (i);
