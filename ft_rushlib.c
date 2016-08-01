/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_rush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomnes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 12:50:10 by aomnes            #+#    #+#             */
/*   Updated: 2016/07/30 12:50:12 by aomnes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*rush00(int ix, int iy, int x, int y)
{
	int		i;
	char	*result;

	i = 0;
	result = (char*)malloc(sizeof(char*) * (x * y + 1));
	while (iy < y)
	{
		while (ix < x)
		{
			if (ft_iscorner00(ix, iy, x, y) == 1)
				result[i] = 'o';
			else if (iy == 0 || iy == y - 1)
				result[i] = '-';
			else if (ix == 0 || ix == x - 1)
				result[i] = '|';
			else
				result[i] = ' ';
			ix++;
			i++;
		}
		ix = 0;
		iy++;
	}
	result[i] = '\0';
	return (result);
}

char		*rush01(int ix, int iy, int x, int y)
{
	char	*result;
	int		i;

	i = 0;
	result = (char*)malloc(sizeof(char*) * (x * y + 1));
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			result[i] = ft_corner01(ix, iy, x, y);
			ix++;
			i++;
		}
		iy++;
	}
	result[i] = '\0';
	return (result);
}

char		*rush02(int ix, int iy, int x, int y)
{
	char	*result;
	int		i;

	i = 0;
	result = (char*)malloc(sizeof(char*) * (x * y + 1));
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			result[i] = ft_corner02(ix, iy, x, y);
			ix++;
			i++;
		}
		iy++;
	}
	result[i] = '\0';
	return (result);
}

char		*rush03(int ix, int iy, int x, int y)
{
	char	*result;
	int		i;

	i = 0;
	result = (char*)malloc(sizeof(char*) * (x * y + 1));
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			result[i] = ft_corner03(ix, iy, x, y);
			ix++;
			i++;
		}
		iy++;
	}
	result[i] = '\0';
	return (result);
}

char		*rush04(int ix, int iy, int x, int y)
{
	char	*result;
	int		i;

	i = 0;
	result = (char*)malloc(sizeof(char*) * (x * y + 1));
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			result[i] = ft_corner04(ix, iy, x, y);
			ix++;
			i++;
		}
		iy++;
	}
	result[i] = '\0';
	return (result);
}
