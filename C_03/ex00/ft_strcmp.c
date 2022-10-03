/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:43:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/15 11:16:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// <0 : if the 1st non-matching char has a lower ascii value in s1 than s2
// 0  : if the strings are equal
// >0 : if the 1st non-matchng char has a higher ascii value in s1 than s2

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
    // Create two strings
    char    *s1 = "New";
    char    *s2 = "Newd";

    // Run comparaison function
    int value = ft_strcmp(s1, s2);

    // Check for equality
	printf("Value: %d\n", value);
} */