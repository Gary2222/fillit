/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:27:46 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:28:55 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*idest;

	idest = dest;
	while (*idest)
		idest++;
	while (n && *src)
	{
		*idest = *src;
		idest++;
		src++;
		n--;
	}
	*idest = '\0';
	return (dest);
}
