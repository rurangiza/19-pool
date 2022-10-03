/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:29:23 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 12:04:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

// Calculate length of base
long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

long	condition(char *base, long i)
{
	long	j;

	j = 0;
	while (base[j] != '\0')
	{
		if ((i != j) && (base[i] == base[j]))
		{
			return (0);
			break ;
		}
		j++;
	}
	return (1);
}

// Check for input errors: returns 1 if there is no error, and 0 otherwise
long	no_error(char *base)
{
	long	i;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (condition(base, i) == 0)
			return (0);
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	ch;
	long	l_nbr;
	long	base_len;

	l_nbr = nbr;
	base_len = ft_strlen(base);
	if (no_error(base))
	{
		if (l_nbr < 0)
		{
			write(1, "-", 1);
			l_nbr = l_nbr * (-1);
		}
		if (l_nbr > base_len - 1)
		{
			ft_putnbr_base(l_nbr / base_len, base);
			ft_putnbr_base(l_nbr % base_len, base);
		}
		else if (l_nbr >= 0 && l_nbr < base_len)
		{
			ch = base[l_nbr];
			write(1, &ch, 1);
		}
	}
}

/*
int main(void)
{
	// Input
	int nbr = 364845454;
	char *base = "0123456789abcdef";
	// Call function
	ft_putnbr_base(nbr, base);
	// Autres
} */