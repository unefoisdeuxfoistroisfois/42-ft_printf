/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:55:12 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 00:06:15 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	char	*mot;
	int	res;
	int	x;

	mot = "Bradley\n";
	x = 42;
	ft_printf(mot);
	ft_printf("Charactere : %c\n", 'B');
	ft_printf("String : %s\n", "Salut comment tu vas ?");
	ft_printf("Adresse : %p", &x);
	ft_printf("Decimal : %d\n", -4219);
	ft_printf("Entier : %i\n", 151);
	ft_printf("Unsigned int : %u\n", 6543);

	return (0);
}
