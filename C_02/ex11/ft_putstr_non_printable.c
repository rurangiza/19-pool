/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:00:23 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/15 09:23:02 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	is_printable(char ch)
{
	if (ch < 32 || ch > 126)
		return (0);
	else
		return (1);
}

void	smaller_than_sixteen(int decimal)
{
	char	ch;
	char	*letters;

	letters = "0123456789abcdef";
	ch = letters[decimal];
	if (decimal <= 9)
	{
		write(1, "\\", 1);
		write(1, "0", 1);
		write(1, &ch, 1);
	}
	else
	{
		write(1, "\\", 1);
		write(1, "0", 1);
		write(1, &ch, 1);
	}
}

void	larger_than_sixteen(int remainder)
{
	char	*letters;

	letters = "0123456789abcdef";
	if (remainder <= 9)
	{
		write(1, "\\", 1);
		write(1, "1", 1);
		write(1, &remainder, 1);
	}
	else
	{
		write(1, "\\", 1);
		write(1, "1", 1);
		write(1, &letters[remainder], 1);
	}
}

void	check_conditions(int decimal, int remainder)
{
	if (decimal == 127)
	{
		write(1, "\\", 1);
		write(1, "7", 1);
		write(1, "f", 1);
	}
	else if (decimal < 16)
		smaller_than_sixteen(decimal);
	else if (decimal > 16 && decimal < 32)
		larger_than_sixteen(remainder);
}

// Convert unprintable characters to hex
void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		decimal;
	int		remainder;

	i = 0;
	while (str[i] != '\0')
	{
		decimal = str[i];
		remainder = decimal % 16;
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
			check_conditions(decimal, remainder);
		i++;
	}
}


int	main(void)
{
	char	*str = "Coucou mon \012 est non imprimable";

	ft_putstr_non_printable(str);
} 
