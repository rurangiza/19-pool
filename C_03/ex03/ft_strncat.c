/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:13:30 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/15 09:36:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Limits the amount of characters that will be copied in [dest]

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
int main(void)
{
	char str1[20] = "abjisojojd";
	char *str2 = "pile poile id";
	unsigned int nb = 15;

	printf("Dest: %s", strncat(str1, str2, nb)); // Original
	// printf("Dest: %s", ft_strncat(str1, str2, nb)); // Ma fonction
} */