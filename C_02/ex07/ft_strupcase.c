/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:49:05 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/09 08:10:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Transform every letter to uppercase

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char s[] = "arsEne";

	ft_strupcase(s);
	printf("%s\n", s);
} */
