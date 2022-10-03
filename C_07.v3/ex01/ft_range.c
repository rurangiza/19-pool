/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:38:32 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/24 15:40:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Create array of numbers between min and max
int	*ft_range(int min, int max)
{
	int	*tab;
	int	length;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	length = max - min;
	tab = (int *) malloc(length * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int *tab_int = ft_range(23, 65);
	
	int i = 0;
	while (tab_int[i] != '\0')
	{
		printf("%d ", tab_int[i]);
		i++;
	}	
	printf("\n");
}
*/