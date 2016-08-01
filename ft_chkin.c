/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chkin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:23:56 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 04:35:52 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Check input contains ONLY rush00 characters. Return 1 on pass
*/

int	ft_sanitycheck(char c)
{
	if (c == ' ' || c == 'o' || c == '-')
		return (1);
	if (c == '|' || c == '/' || c == '\\')
		return (1);
	if (c == '*' || c == 'A' || c == 'B')
		return (1);
	if (c == 'C' || c == '\n')
		return (1);
	return (0);
}

/*
** Applies sanitycheck
*/

int	ft_chkfk(char *c, int i)
{
	while (c[i] != '\0')
	{
		if (!ft_sanitycheck(c[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
** returns 1 if passes the square test.
*/

int	ft_chksq(char *c, int newl, int width, int space)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '\n')
			newl++;
		if (newl == 0)
			width++;
		if (c[i] == ' ')
			space++;
		i++;
	}
	if (width < 2)
		width = 0;
	else
		width = width - 2;
	if (newl < 2)
		newl = 0;
	else
		newl = newl - 2;
	if (width * newl == space)
		return (1);
	return (0);
}

/*
** returns 1 if each line is the same width. 1 liner auto pass
*/

int	ft_chkwd(char *c, int i, int wd1, int wd2)
{
	while (c[i] != '\0')
	{
		if (c[i] == '\n')
			wd2++;
		i++;
	}
	if (wd2 == 0)
		return (1);
	i = 0;
	wd2 = 0;
	while (c[i] != '\0')
	{
		wd1++;
		if (c[i] == '\n')
		{
			if (wd2 != 0 && wd2 != wd1)
				return (0);
			wd2 = wd1;
			wd1 = 0;
		}
		i++;
	}
	return (1);
}

/*
** Applies above checks
*/

int	ft_chkin(char *c)
{
	if (ft_strlen(c) == 0)
	{
		write(2, "You fed me nothing :(\n", 22);
		return (0);
	}
	if (!ft_chkfk(c, 0))
	{
		write(2, "You fed me bad inputs :(\n", 25);
		return (0);
	}
	if (!ft_chksq(c, 0, 0, 0))
	{
		write(2, "You fed me bad rectangle :(\n", 28);
		return (0);
	}
	if (!ft_chkwd(c, 0, 0, 0))
	{
		write(2, "You fed me bad shape :(\n", 24);
		return (0);
	}
	return (1);
}
