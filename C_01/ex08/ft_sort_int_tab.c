/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:53:29 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/08 10:07:54 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		size--;
	}
}

/*
int main(void)
{
	int arr[] = {9, 8, 7, 6, 34, 87, 21, 5, 4, 3, 2, 43, 59, 1};
	int len = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, len);

	int i;

	i = 0;
	while (i < len)
	{
		printf("%d ",arr[i] );
		i++;
	}
}
*/
