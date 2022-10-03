/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:05:46 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/21 09:35:40 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if string contains valid unsigned int
// Ignores all other characters
int	is_valid_unint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}