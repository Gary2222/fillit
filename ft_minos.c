/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:49:14 by jraymond          #+#    #+#             */
/*   Updated: 2016/12/08 22:50:14 by jraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_minos(char *file)
{
	int		retread;
	int		tmp;
	char	buf[21 + 1];
	int 	fd;
	int		tab[27];
	int		i;

	i = 0;
	if (!(fd = open(file, O_RDONLY)))
		return (-1);
	while (retread = (read(fd, &buf, 21)))
	{
		if ((tab[i] = checkbuf(buf)) == -1)
			return (-1);
		i++;
		tmp = retread;
		ft_bzero(buf, 22);
	}
	tab[i] = 42;
	if (tmp != 20)
		return (-1);
	return (1);	
}