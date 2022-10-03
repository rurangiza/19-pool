/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:39:41 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 20:29:55 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Écrire une fonction itérative qui renvoie un nombre. Ce nombre est le résultat de
l’opération factorielle à partir du nombre passé en paramètre.
*/

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	calc;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		calc = 1;
		while (nb > 1)
		{
			calc *= nb;
			nb--;
		}
		return (calc);
	}
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
} */