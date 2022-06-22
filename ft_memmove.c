/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:11:42 by guvargas          #+#    #+#             */
/*   Updated: 2022/06/20 11:46:28 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*aux;

	aux = malloc(len);
	aux = ft_memcpy(aux, ((const void *)src), len);
	i = -1;
	while (++i < len)
		((char *)dst)[i] = ((char *)aux)[i];
	return ((char *)dst);
}
