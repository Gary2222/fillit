/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:24:46 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:25:25 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*idest;
	const char	*isrc;
	size_t		n;
	size_t		idestlong;

	idest = dest;
	isrc = src;
	n = size;
	while (n-- != 0 && *idest != '\0')
		idest++;
	idestlong = idest - dest;
	n = size - idestlong;
	if (n == 0)
		return (idestlong + ft_strlen(isrc));
	while (*isrc)
	{
		if (n != 1)
		{
			*idest++ = *isrc;
			n--;
		}
		isrc++;
	}
	*idest = '\0';
	return (idestlong + (isrc - src));
}
