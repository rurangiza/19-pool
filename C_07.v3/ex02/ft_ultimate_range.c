/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:24:18 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/23 15:05:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(length * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}

/*
#include <stdio.h>
int	main(void)
{
	int *range;
	int max = 56;
	int min = -90;
	int diff = max - min;
	ft_ultimate_range(&range, min, max);
	
	int i = 0;
	while (i < diff)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/