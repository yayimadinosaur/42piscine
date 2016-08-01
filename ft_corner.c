/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_corner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 08:16:11 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 08:16:12 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Returns 1 if it is a corner for 00 to 04
*/

int		ft_iscorner00(int ix, int iy, int x, int y)
{
	if ((ix == 0 && iy == 0) || (ix == 0 && iy == y - 1))
		return (1);
	if ((ix == x - 1 && iy == 0) || (ix == x - 1 && iy == y - 1))
		return (1);
	return (0);
}

char	ft_corner01(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('/');
	else if (ix == 0 && iy == (y - 1))
		return ('\\');
	else if (ix == (x - 1) && iy == 0)
		return ('\\');
	else if (ix == (x - 1) && iy == (y - 1))
		return ('/');
	else if (ix == 0 || iy == 0 || ix == (x - 1) || iy == (y - 1))
		return ('*');
	else
		return (' ');
}

char	ft_corner02(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('A');
	else if (ix == 0 && iy == (y - 1))
		return ('C');
	else if (ix == (x - 1) && iy == 0)
		return ('A');
	else if (ix == (x - 1) && iy == (y - 1))
		return ('C');
	else if (ix == 0 || iy == 0 || ix == (x - 1) || iy == (y - 1))
		return ('B');
	else
		return (' ');
}

char	ft_corner03(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('A');
	else if (ix == 0 && iy == (y - 1))
		return ('A');
	else if (ix == (x - 1) && iy == 0)
		return ('C');
	else if (ix == (x - 1) && iy == (y - 1))
		return ('C');
	else if (ix == 0 || iy == 0 || ix == (x - 1) || iy == (y - 1))
		return ('B');
	else
		return (' ');
}

char	ft_corner04(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('A');
	else if (ix == 0 && iy == (y - 1))
		return ('C');
	else if (ix == (x - 1) && iy == 0)
		return ('C');
	else if (ix == (x - 1) && iy == (y - 1))
		return ('A');
	else if (ix == 0 || iy == 0 || ix == (x - 1) || iy == (y - 1))
		return ('B');
	else
		return (' ');
}
