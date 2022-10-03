/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_slpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:20 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 17:30:35 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	non_alpha_counter;

	non_alpha_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'z') || (str[i] > 'Z' && str[i] < 'a'))
		{
			non_alpha_counter++;
		}
		i++;
	}
	if (non_alpha_counter > 0)
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
	char *text = "abcd efg";
	int alpha_counter = ft_str_is_alpha(text);
	
	if (alpha_counter == 1)
		printf("Contains only alphabetical characters");
	else
		printf("Contains non-alphabetical characters");
} */
