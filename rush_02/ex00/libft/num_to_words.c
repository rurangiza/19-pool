/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_to_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:36:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/21 15:09:12 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_putnbr.c"
#include "ft_putstr.c"

// Converts number to corresponding letters
void	num_to_words(int number);

#define BUF_SIZE 4096

int	main(void)
{
	// Variables
	int dict_fd;
	int ret;
	char buffer[BUF_SIZE + 1];

	// Open dictionnary
	dict_fd = open("numbers.dict", O_RDONLY); 
	if (dict_fd == -1) // Error handling
		ft_putstr("Dict Error\n");
	
	// Read file
	while ((ret = read(dict_fd, buffer, BUF_SIZE))) // Renvoie le nombre d'octet lue
	{
		buffer[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(" characters\n");
		ft_putstr("\n");
		ft_putstr(buffer);
	}
	
	// Update buffer size

	// Close file
	if (close(dict_fd) == -1) // Error handling
		ft_putstr("Dict Error\n");
	return (0);
}