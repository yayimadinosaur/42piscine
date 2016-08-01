/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rushdisplay.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 05:46:54 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 05:53:54 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** displays int through ft_putchar
*/

void	ft_putnbr(int nb)
{
	int c[nb];
	int i;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		i = 0;
		while (nb > 0)
		{
			c[i] = nb % 10;
			nb = nb / 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			ft_putchar(c[i] + '0');
			i--;
		}
	}
}

/*
** displays results
*/

int		ft_prtresult(char *c, int wd, int ht, int status)
{
	if (status >= 1)
		ft_putstr(" || ");
	ft_putchar('[');
	ft_putstr(c);
	ft_putstr("] [");
	ft_putnbr(wd);
	ft_putstr("] [");
	ft_putnbr(ht);
	ft_putchar(']');
	return (1);
}

/*
** prepares comparisons for ft_prtresult
*/

void	ft_displayresult(char *c, int wd, int ht, int i)
{
	int status;

	status = 0;
	while (i <= 4)
	{
		if (ft_strcmp(c, rush00(0, 0, wd, ht)) == 0 && i == 0)
			status = ft_prtresult("rush-00", wd, ht, status);
		if (ft_strcmp(c, rush01(0, 0, wd, ht)) == 0 && i == 1)
			status = ft_prtresult("rush-01", wd, ht, status);
		if (ft_strcmp(c, rush02(0, 0, wd, ht)) == 0 && i == 2)
			status = ft_prtresult("rush-02", wd, ht, status);
		if (ft_strcmp(c, rush03(0, 0, wd, ht)) == 0 && i == 3)
			status = ft_prtresult("rush-03", wd, ht, status);
		if (ft_strcmp(c, rush04(0, 0, wd, ht)) == 0 && i == 4)
			status = ft_prtresult("rush-04", wd, ht, status);
		i++;
	}
	if (status != 0)
		ft_putchar('\n');
}

/*
** displays something if input matches any rushes.
*/

void	ft_rushdisplay(char *c, int width, int height, int i)
{
	int		j;
	char	str[ft_strlen(c) + 1];

	j = 0;
	while (c[i] != '\0')
	{
		if (c[i] != '\n')
		{
			str[j] = c[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	i = 0;
	ft_displayresult(str, width, height, i);
}
