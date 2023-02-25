/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **argv)
{
	int i;
    int j;

    i = 0;
    j = ac - 1;
    if (ac == 1 || argv[1][0] == '\0')
        return (0);
    while (j > 0)
    {
        while (argv[j][i])
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j--;
        i = 0;
    }
    return (0);
}