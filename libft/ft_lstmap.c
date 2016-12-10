/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:49:05 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/17 16:49:16 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*copy;

	new = NULL;
	if (lst && f)
	{
		new = f(lst);
		copy = new;
		while (lst->next)
		{
			copy->next = f(lst->next);
			copy = copy->next;
			lst = lst->next;
		}
	}
	return (new);
}
