/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 09:43:47 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/15 15:53:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// <0 : if the 1st non-matching char has a lower ascii value in s1 than s2
// 0  : if the strings are equal
// >0 : if the 1st non-matchng char has a higher ascii value in s1 than s2

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n - 1) && ((s1[i] == s2[i]) && (s1[i] != '\0')))
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char *s1 = "Morey";
	char *s2 = "Hello";
	unsigned int n = 0;
	int value = ft_strncmp(s1, s2, n);
	printf("Value: %d\n", value);
} */