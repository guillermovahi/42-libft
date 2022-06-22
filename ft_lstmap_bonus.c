/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:21:39 by guvargas          #+#    #+#             */
/*   Updated: 2022/06/22 16:59:11 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	ptr = (t_list *) malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	while(ptr != NULL)
	{
		(*f)(lst->content);
		ptr = ptr->next;
	}
	ptr = NULL;
	return (ptr);
}
