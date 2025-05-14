/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:52:36 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 15:59:38 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "unistd.h"
int	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putptr(void *ptr);
void	ft_putnbr_16(unsigned long n, char letter)
void	ft_putnbr_unsigned(unsigned int nb)
#endif
