/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:40:13 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 18:32:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	non_digit_counter;

	non_digit_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			non_digit_counter++;
		}
		i++;
	}
	if (non_digit_counter > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*
int main(void)
{
	char *text = "5673-482";
	int digit_counter = ft_str_is_numeric(text);
	
	if (digit_counter == 1)
		printf("Contains only numeric characters");
	else
		printf("Contains non-numeric characters");
}*/
