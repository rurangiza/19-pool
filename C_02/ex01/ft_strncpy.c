/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:02:22 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/14 10:54:28 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The stpncpy() and strncpy() functions copy at most len characters 
from src into dst. If src is less than len characters long, 
the remainder of dst is filled with `\0' characters.
Otherwise, dst is not terminated.
*/

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*s1;
	char	s2[35];
	int		l;

	s1 = "Nothing new under the sun";
	l = 20;
	ft_strncpy(s2, s1, l);
	printf("Original: %s\n", s1);
	printf("     len: %d\n", l);
	printf(" Nouveau: %s\n", s2);
} */
