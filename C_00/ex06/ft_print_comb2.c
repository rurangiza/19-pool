/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:54:24 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 10:50:56 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printer(int a, int b, char ch)
{
	ch = a / 10 + '0';
	write(1, &ch, 1);
	ch = a % 10 + '0';
	write(1, &ch, 1);
	write(1, " ", 1);
	ch = b / 10 + '0';
	write(1, &ch, 1);
	ch = b % 10 + '0';
	write(1, &ch, 1);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	ch;

	a = 0;
	while (a < 99)
	{
		b = (a + 1);
		while (b < 100)
		{
			ft_printer(a, b, ch);
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}*/
