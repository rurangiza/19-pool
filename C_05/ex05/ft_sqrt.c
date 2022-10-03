/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:03:51 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 20:27:34 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Which number multiplied by itself gives nb?

// renvoie la racine carrée entière d’un nombre si elle existe
// 0 si la racine carrée n’est pas entière

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while ((root * root) < nb && root < 46341)
		root++;
	if (root * root == nb)
		return (root);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(-5));
}
*/