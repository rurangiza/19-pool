/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:06:09 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/20 09:43:27 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*current_arg;

	(void) argc;
	i = 1;
	while (argv[i])
	{
		current_arg = argv[i];
		j = 0;
		while (current_arg[j] != '\0')
		{
			write(1, &current_arg[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
