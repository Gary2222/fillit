/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:12:13 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/16 16:12:16 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*is1;
	unsigned char	*is2;

	is1 = (unsigned char*)s1;
	is2 = (unsigned char*)s2;
	while (n)
	{
		if (*is1 != *is2)
			return (*is1 - *is2);
		is1++;
		is2++;
		n--;
	}
	return (0);
}
