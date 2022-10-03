/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:48:36 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/23 15:10:57 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Une fonction qui va concatener l'ensemble des chaine de caracteres (strings)
// pointees par strs en separants a l'aide de sep.

//#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>

int	strlen_2d(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	length;

	length = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			length++;
			j++;
		}
		j = 0;
		while ((sep[j] != '\0') && (i < (size - 1)))
		{
			length++;
			j++;
		}
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*dest;

	length = strlen_2d(size, strs, sep);
	dest = malloc(length * sizeof(char));
	if (dest != NULL)
	{
		k = 0;
		i = 0;
		while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
				dest[k++] = strs[i][j++];
			j = 0;
			while (sep[j] != '\0' && (i < (size - 1)))
				dest[k++] = sep[j++];
			i++;
		}
		dest[k] = '\0';
	}
	return (dest);
}

/*
int	main(void)
{
	char	*strings[5];
	char	*sep;
	char	*str;

	strings[0] = "Notion";
	strings[1] = "Ableton";
	strings[2] = "SpaceX";
	strings[3] = "Teenage Engineering";
	strings[4] = "Google";
	sep = " *|* ";
	str = ft_strjoin(5, strings, sep);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/