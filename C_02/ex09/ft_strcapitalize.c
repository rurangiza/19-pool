/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:25:45 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/13 09:22:17 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Returns one if character is lowercase_alpha
int	is_alpha_lower(char ch)
{
	if ((ch >= 'a') && (ch <= 'z'))
		return (1);
	else
		return (0);
}

// Returns one if character is alpha numeric
int	is_alphanum(char ch)
{
	if (((ch >= '0') && (ch <= '9'))
		|| ((ch >= 'a') && (ch <= 'z'))
		|| ((ch <= 'Z') && (ch >= 'A')))
		return (1);
	else
		return (0);
}

// Returns one if character is neither alpha, nor numeric
int	is_special(char ch)
{
	if (!(is_alphanum(ch)))
		return (1);
	else
		return (0);
}

// Converti toutes majuscules en minuscules
void	to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
}

/* Capitalize first letter of each word 
and transform all other letters to lowercase */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	to_lower(str);
	while (str[i] != '\0')
	{
		if (is_alpha_lower(str[0]))
		{
			str[0] -= 32;
		}
		if (is_special(str[i]) && is_alpha_lower(str[i + 1]))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*
// Test the function
int main(void)
{
	char text[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	// char text[] = "78donjon dragon-o.";
	
	// Original string	
	printf("Avant: %s\n", text);
	
	// Capitalizes first letters
	ft_strcapitalize(text);
	
	// New string
	printf("Apres: %s\n", text);
} */