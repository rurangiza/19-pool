/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:01:37 by arurangi          #+#    #+#             */
/*   Updated: 2022/08/21 09:04:04 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + str[i] - '0';
        i++;
    }
    return (sign * result);
}