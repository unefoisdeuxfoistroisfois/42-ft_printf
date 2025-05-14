/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:55:12 by britela-          #+#    #+#             */
/*   Updated: 2025/05/14 16:36:43 by britela-         ###   ########.fr       */
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
	ft_printf("Hexa minuscule : %x\n", 48879);
	ft_printf("Hexa MAJUSCULE : %X\n", 48879);
	ft_printf("Pourcentage : %%");
	return (0);
}
