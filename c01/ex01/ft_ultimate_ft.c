/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enveryilmaz <enveryilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:02:50 by envyilma          #+#    #+#             */
/*   Updated: 2024/08/01 00:15:54 by enveryilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include <stdio.h> /*
#    int printf(const char *, ...);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	*********p_nbr;
	int	********p_nbr2;
	int	*******p_nbr3;
	int	******p_nbr4;
	int	*****p_nbr5;
	int	****p_nbr6;
	int	***p_nbr7;
	int	**p_nbr8;
	int	*p_nbr9;
	int	nbr;

	nbr = 21;
	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	printf("%d\n", nbr);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}
