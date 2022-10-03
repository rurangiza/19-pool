/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:06:49 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 19:10:50 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	non_uppercase_counter;

	non_uppercase_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			non_uppercase_counter++;
		}
		i++;
	}
	if (non_uppercase_counter > 0)
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
	char *text = "ARSENE";
	int only_upper = ft_str_is_uppercase(text);
	
	if (only_upper == 1)
		printf("%s: has only uppercase", text);
	else
		printf("%s: has non-uppercase letters or other characters", text);
} */
