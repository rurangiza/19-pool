/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:34:54 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 19:05:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	non_lowercase_counter;

	non_lowercase_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			non_lowercase_counter++;
		}
		i++;
	}
	if (non_lowercase_counter > 0)
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
	char *text = "arsene";
	int only_lower = ft_str_is_lowercase(text);
	
	if (only_lower == 1)
		printf("%s: has only lowercase", text);
	else
		printf("%s: has non-lowercase letters or other characters", text);
} */
