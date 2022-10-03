/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:10 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/20 09:44:15 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterate through all command line arguments
	// Compare letters of current to  next
		//  if next bigger, swap -> bigger will end up at end
		//  else, continue : while decreament size

#include <unistd.h>

// Print new list
void	print_params(char **argv);
// Swap after comparaison
void	ft_swap(char **s1, char **s2);

// Comapre arguments then sort
void	check_conditions(char **argv, int *i)
{
	int	j;

	j = 0;
	while ((argv[*i][j] == argv[*i + 1][j]) &&
	(argv[*i + 1][j] != '\0') && (argv[*i + 1][j] != '\0'))
	{
		j++;
	}
	if (argv[*i][j] > argv[*i + 1][j])
		ft_swap(&argv[*i], &argv[*i + 1]);
}

// Sort command line arguments
int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = 0;
	while (argc - k > 0)
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i + 1])
			{
				check_conditions(argv, &i);
			}
			i++;
		}
		k++;
	}
	print_params(argv);
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	print_params(char **argv)
{
	int		i;
	int		j;
	char	*current_arg;

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
