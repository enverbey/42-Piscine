/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:47:45 by envyilma          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:59 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
        write(1, "-2147483648", 11);
    else if(nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(-nb);
    }
    else 
    {
        if (nb > 9)
            ft_putnbr(nb / 10);
        write(1, &("0123456789")[nb % 10], 1);
    }
}