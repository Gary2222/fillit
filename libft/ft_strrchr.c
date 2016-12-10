/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:32:01 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:33:46 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occu;

	last_occu = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occu = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (last_occu);
}
