/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:29:30 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:29:47 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*idest;

	idest = dest;
	while (n && *src)
	{
		*idest = *src;
		idest++;
		src++;
		n--;
	}
	while (n)
	{
		*idest = '\0';
		idest++;
		n--;
	}
	return (dest);
}
