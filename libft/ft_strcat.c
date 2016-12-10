/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:17:49 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:17:56 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*idest;

	idest = dest;
	while (*idest)
		idest++;
	while (*src)
	{
		*idest = *src;
		idest++;
		src++;
	}
	*idest = '\0';
	return (dest);
}
