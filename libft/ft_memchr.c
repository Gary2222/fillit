/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:10:25 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:12:02 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char *isrc;
	unsigned char ic;

	isrc = (unsigned char*)src;
	ic = (unsigned char)c;
	while (len)
	{
		if (*isrc == ic)
			return (isrc);
		isrc++;
		len--;
	}
	return (NULL);
}
