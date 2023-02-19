/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:08:36 by marvin            #+#    #+#             */
/*   Updated: 2023/02/19 00:08:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *tmp)
{
    unsigned int i;

    i = 0;
    while(tmp[i])
        i++;
    return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    int len_d;
    int len_s;
    int i;

    len_d = ft_strlen(dest);
    len_s = ft_strlen(src);
    if (size == 0 || size <= len_d)
        return (len_s + size);
    while (src[i] && i < size - len_d - 1)
    {
        dest[len_d + i] = src[i];
        i++;
    }
    dest[len_d + i] = '\0';
    return (len_d + len_s);
}