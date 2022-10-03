/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:05:16 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/21 11:06:40 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main(int argc, char **argv)
{
	int number;
	
	if (argc == 2) // progName + number
	{
			// Check for valid unsigned integer
			if (is_valid_unint(argv[1]))
			{
					// Convert string number to integer number
					number = ft_atoi(argv[1]);
					// Converts number to corresponding letters
					num_to_words(number);
			}
			else
				ft_putstr("Error");
				ft_putstr("\n");
			
	}
	else if (argc == 3) // progName + dict + number
	{
			// Check for valid unsigned integer
			if (is_valid_unint(argv[2]))
			{
					// Convert string number to integer number
					number = ft_atoi(argv[2]);
					// Convert number to corresponding letters
					num_to_words(number);
			}
			else
				ft_putstr("Error");
				ft_putstr("\n");
	}
	else
			ft_putstr("Error");
			ft_putstr("\n");
	return (0);
}