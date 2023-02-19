/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:10:04 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 03:10:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int number;
    int is_neg;

    number = 0;
    i = 0;
    is_neg = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            is_neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    return (number * is_neg);
}
/*
#include <stdio.h>
int	main()
{
	char *s = "	 -+----+01234-5av234cvfds34";
	printf("%d", ft_atoi(s));
}
*/