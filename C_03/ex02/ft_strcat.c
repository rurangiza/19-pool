/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:49:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/14 09:23:54 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Function to calculate length of dest
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	// Input
	char s1[] = "wq";
	char s2[] = " abcfeifejffw";

	int size = sizeof(s1);
	// Copier S2 dans S1, si S2 existe et que S1 a de la place
	ft_strcat(s1, s2);

	// Print results
	printf("%s\n", s1);
} */