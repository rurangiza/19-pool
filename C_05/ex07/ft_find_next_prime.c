/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:08:13 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 20:26:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Écrire une fonction qui renvoie le nombre premier immédiatement supérieur ou
égal au nombre passé en paramètre.
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Next prime: %d", ft_find_next_prime(2147483644));
}
*/