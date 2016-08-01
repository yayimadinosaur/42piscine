/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:04:38 by cshi              #+#    #+#             */
/*   Updated: 2016/07/30 20:04:39 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Takes and writes a char
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Takes and writes a string
*/

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
** Compares two strings. returns 0 if same
*/

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int match;

	i = 0;
	while (1)
	{
		match = 0;
		if (s1[i] == s2[i])
			match = 1;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (!match)
			return (s1[i] - s2[i]);
		i++;
	}
}

/*
** Returns length of string
*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}

/*
** mode 1 returns width, mode 2 returns height
*/

int		ft_htnwd(char *c, int newl, int width, int mode)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '\n')
			newl++;
		if (newl == 0)
			width++;
		i++;
	}
	if (mode == 1)
		return (width);
	if (mode == 2)
		return (newl);
	return (0);
}
