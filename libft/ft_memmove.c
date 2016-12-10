/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 21:51:16 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/18 22:00:21 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i--)
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
	}
	return (dst);
}
