/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:16:47 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/09 07:28:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	unprintable_ch_counter;

	unprintable_ch_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			unprintable_ch_counter++;
		}
		i++;
	}
	if (unprintable_ch_counter > 0)
		return (0);
	else
		return (1);
}

/*
int main(void)
{
	char *str;
	
	str = "Nothing new is great\n";
	int printability = ft_str_is_printable(str);

	if (printability == 1)
	{
		printf("%s: has only printable characters", str);
	}
	else
		printf("%s: has UNPRINTABLE characters", str);
} */
