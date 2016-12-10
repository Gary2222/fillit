/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:29:02 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/18 23:12:43 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else
		while (*s1 && *s2 && --n && (unsigned char)*s1 == (unsigned char)*s2)
		{
			s1++;
			s2++;
		}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
