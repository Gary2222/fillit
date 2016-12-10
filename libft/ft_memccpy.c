/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:24:25 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:10:16 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = (char*)dest;
	csrc = (char*)src;
	while (n > 0 && *csrc != c)
	{
		n--;
		*cdest++ = *csrc++;
	}
	if (n > 0)
	{
		*cdest++ = *csrc++;
		return ((void*)cdest);
	}
	else
		return (NULL);
}
