/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:59:04 by guvargas          #+#    #+#             */
/*   Updated: 2022/06/19 11:53:18 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	caracter;

	caracter = 0;
	while (str[caracter] != '\0')
	{
		caracter++;
	}
	return (caracter);
}
