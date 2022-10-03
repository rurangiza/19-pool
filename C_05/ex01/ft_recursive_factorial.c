/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:44:29 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 15:37:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	calc;

	calc = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	calc = nb * ft_recursive_factorial(nb - 1);
	return (calc);
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(9));
	return (0);
}*/
