/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:32:49 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 12:00:50 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a string of digits into an integer value

// #include <stdio.h>

int	is_alpha(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	else
		return (0);
}

int	is_space(char ch)
{
	if ((ch >= 9 && ch <= 13) || ch == 32)
		return (1);
	else
		return (0);
}

void	convert_to_integer(int i, int *result, char *str)
{
	int	j;

	j = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
	{
		*result = (*result * 10) + (str[i + j] - '0');
		j++;
	}
}

// Checks for alpha or space after a sign
int	not_number_or_sign_after_sign(char *str, int i, int *sign)
{
	if (str[i] == '-')
		*sign *= -1;
	if ((str[i + 1] >= '0' && str[i + 1] <= '9')
		|| str[i + 1] == '-' || str[i + 1] == '+')
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	if (!(str))
		return (0);
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
			return (0);
		if (str[i] == '-' || str[i] == '+')
			if (not_number_or_sign_after_sign(str, i, &sign) == 1)
				return (0);
		if ((str[i]) >= '0' && str[i] <= '9')
		{
			convert_to_integer(i, &result, str);
			break ;
		}
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	char	*text = "  	-++----fgo;f:83648";
	int		val;

	val = ft_atoi(text);
	printf("%d \n", val);
	return (0);
} */
