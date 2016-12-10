/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:19:33 by jraymond          #+#    #+#             */
/*   Updated: 2016/12/08 20:43:59 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strcmp_f(const char *s1, const char *s2)
{
	int		counter;
	int		counter2;
	int		i;

	i = 0;
	counter = 0;
	counter2 = 0;
	while (*s1 && *s2 && i != 4)
	{
		i++;
		while (*s1 == '.' || *s1 == '\n')
		{
			counter++;
			s1++;
		}
		while (*s2 == '.' || *s2 == '\n')
		{
			counter2++;
			s2++;
		}
		if (counter != counter2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
