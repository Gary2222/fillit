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

t_minos			ft_minos(int ref)
{
	t_minos		mino;

	mino->x1 = g_coord[ref][0];
	mino->y1 = g_coord[ref][1];
	mino->x2 = g_coord[ref][2];
	mino->y2 = g_coord[ref][3];
	mino->x3 = g_coord[ref][4];
	mino->y3 = g_coord[ref][5];
	mino->x4 = g_coord[ref][6];
	mino->y4 = g_coord[ref][7];
	return (mino);
}
