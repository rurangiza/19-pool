/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:54:57 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/13 14:41:04 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "ERROR: program needs 2 arguments\n", 32);
	}
	// Colup 1 - 4
	char col1up;
	char col2up;
	char col3up;
	char col4up;
	// Coldown 5 - 6
	char col1down;
	char col2down;
	char col3down;
	char col4down;
	// Rowleft 9 - 12
	char row1left;
	char row2left;
	char row3left;
	char row4left;
	// Rowright 13 - 16
	char row1right;
	char row2right;
	char row3right;
	char row4right;
}