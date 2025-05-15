/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:55:12 by britela-          #+#    #+#             */
/*   Updated: 2025/05/15 15:52:18 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int	res;
	int	x;

	x = 42;
	ft_printf("Bradley\n");
	ft_printf("Charactere : %c\n", 'B');
	ft_printf("String : %s\n", "Salut comment tu vas ?");
	ft_printf("Adresse : %p\n", &x);
	ft_printf("Decimal : %d\n", -4219);
	ft_printf("Entier : %i\n", 151);
	ft_printf("Unsigned int : %u\n", 6543);
	ft_printf("Hexa minuscule : %x\n", 48879);
	ft_printf("Hexa MAJUSCULE : %X\n", 48879);
	ft_printf("Pourcentage : %%");

	printf("\n=== printf officiel ===\n");
	printf("Bradley\n");
	printf("Charactere : %c\n", 'B');
	printf("String : %s\n", "Salut comment tu vas ?");
	printf("Adresse : %p\n", &x);
	printf("Decimal : %d\n", -4219);
	printf("Entier : %i\n", 151);
	printf("Unsigned int : %u\n", 6543);
	printf("Hexa minuscule : %x\n", 48879);
	printf("Hexa MAJUSCULE : %X\n", 48879);
	printf("Pourcentage : %%\n");

	return (0);
}
