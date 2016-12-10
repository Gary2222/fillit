/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:19:40 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/17 16:46:15 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*last;

	if (alst == NULL)
		return ;
	last = *alst;
	while (last != NULL)
	{
		temp = last->next;
		ft_lstdelone(&last, del);
		last = temp;
	}
	*alst = NULL;
}
