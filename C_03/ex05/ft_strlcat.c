/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:19:32 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/16 10:04:18 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function (with the L) achieves the same goal as the 
venerable strcat() function: to append one string onto the end of
the other. The problem with strcat(), however, is that a size
limitation isn’t set for the destination buffer. It’s quite
possible for this buffer to overflow.
*/

// Again, argument dstsize must be equal to the size of the dst buffer.
// That’s the only value it can be.

// RETURNS the combined length of both src and dst strings (not counting 
// their terminating null characters). This result is used to determine 
// whether the final string was truncated.

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	return_conditions(unsigned int size,
unsigned int dest_len, unsigned int src_len)
{
	if (size == 0)
		return (src_len);
	else if (size <= dest_len)
		return (size + src_len);
	else if (size > dest_len)
		return (dest_len + src_len);
	else if (!src_len && size >= dest_len)
		return (dest_len);
	else if (!src_len && size < dest_len)
		return (size);
	else if (!dest_len)
		return (src_len);
	else
		return (dest_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size)
	{
		while (((dest_len + i) < size - 1) && (src[i] != '\0'))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	return (return_conditions(size, dest_len, src_len));
}

/*
int main(void)
{
	char dest[100] = "Bravo"; // 8
	char src[10] = " morerey"; // 6
	unsigned int size = 10;

	unsigned int value = strlcat(dest, src, size);
	//unsigned int value = ft_strlcat(dest, src, size);

	printf("Value: %d\n", value);
	printf("Dest: %s\n", dest);
} */
