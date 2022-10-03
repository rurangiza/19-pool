/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:19:26 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/18 17:28:59 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*current_param;

	i = 0;
	while ((argc - 1 - i) > 0)
	{
		current_param = argv[argc - 1 - i];
		j = 0;
		while (current_param[j] != '\0')
		{
			write(1, &current_param[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
