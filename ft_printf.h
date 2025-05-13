/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 01:52:36 by britela-          #+#    #+#             */
/*   Updated: 2025/05/13 16:25:55 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "unistd.h"
int	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
