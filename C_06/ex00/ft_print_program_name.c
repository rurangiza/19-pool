/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:53:04 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/20 09:45:27 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*program_name;
	int		arguments;
	int		i;

	arguments = argc;
	program_name = argv[0];
	i = 0;
	while (program_name[i] != '\0')
	{
		write(1, &program_name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
