/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:24:50 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 20:26:01 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Un nombre premier est un nombre qui n'est divisible que par 1 et lui meme

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(2147483647));
}
*/