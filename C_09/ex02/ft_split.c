/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:00:14 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/25 20:33:09 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fonction 
qui découpe une chaîne de caractères 
en fonction d’une autre chaîne de caractères.
*/

#include <stdlib.h>

int	is_charset(char ch, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (ch == charset[i])
			return (1);
		i++;
	}
	return (0);
}

// Find size of array for malloc: Returns number of strings 
// seperated by charset for size of array
int	list_size(char *str, char *charset)
{
	int	i;
	int	word_counter;
	int	length;

	length = 0;
	i = 0;
	while (str[i++] != '\0')
		length++;
	word_counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) && word_counter == 0)
			i++;
		if (!is_charset(str[i], charset) && (word_counter == 0) && i < length)
			word_counter++;
		if ((is_charset(str[i], charset)) && str[i + 1] != '\0'
			&& !(is_charset(str[i + 1], charset)))
			word_counter++;
		i++;
	}
	return (word_counter);
}

void	allocate_memory(char *str, int size, char *charset, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (is_charset(str[j], charset) && str[j] != '\0')
			j++;
		while (str[j] != '\0' && !(is_charset(str[j], charset)))
		{
			k++;
			j++;
		}
		tab[i] = malloc((k + 1) * sizeof(char));
		i++;
	}
}

void	create_tab(char *str, int size, char *charset, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (is_charset(str[j], charset))
			j++;
		while (str[j] != '\0' && !(is_charset(str[j], charset)))
		{
			tab[i][k] = str[j];
			j++;
			k++;
		}
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;

	tab = NULL;
	size = list_size(str, charset);
	if (size == 0)
		return (NULL);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	allocate_memory(str, size, charset, tab);
	create_tab(str, size, charset, tab);
	return (tab);
}
