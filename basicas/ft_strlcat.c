/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 08:05:00 by guvargas          #+#    #+#             */
/*   Updated: 2022/06/19 11:57:20 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dest_length;
	unsigned int	j;
	int				src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size < (unsigned int) dest_length + 1)
	{
		dest[dest_length] = '\0';
		return (src_length + size);
	}
	else
	{
		j = 0;
		while (j < (size - dest_length -1) && src[j] != '\0')
		{
			dest[j + dest_length] = src[j];
			j++;
		}
		dest[j + dest_length] = '\0';
		return (src_length + dest_length);
	}
}
