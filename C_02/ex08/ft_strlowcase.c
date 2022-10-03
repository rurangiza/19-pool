/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:12:14 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/09 08:23:56 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Transform every letter to lowercase 

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char s[] = "ArsEnO";

	ft_strlowcase(s);
	printf("%s\n", s);
} */
