/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:03 by jraymond          #+#    #+#             */
/*   Updated: 2016/11/19 02:26:13 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while (to_find[k] == str[j])
		{
			k++;
			j++;
			if (to_find[k] == '\0')
				return ((char*)&str[i]);
		}
		i++;
	}
	return (0);
}
