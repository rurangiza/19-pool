/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:08:49 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/24 16:40:03 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

// Function that allocates sufficient memory for a copy of the string
// It returns a pointer to it. The pointer may be used as an argument for
// the funtion free

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	dest = NULL;
	src_len = ft_strlen(src);
	dest = (char *) malloc(src_len * sizeof(char) + 1);
	i = 0;
	if (dest != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "Nothing new under the sun";
	char *dest = ft_strdup(str);

	printf("%s\n", dest);

	return (0);
}
*/