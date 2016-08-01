/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 17:12:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/30 21:59:16 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(void)
{
	int		i;
	char	str[STR_SIZE];
	char	buf[BUF_SIZE];
	int		holder;

	i = 0;
	while (read(0, buf, 1))
	{
		if ((i + 1000) > STR_SIZE)
			return (0);
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	if (!ft_chkin(str))
	{
		write(2, "Non, Merci\n", 11);
		return (0);
	}
	i = ft_htnwd(str, 0, 0, 1);
	holder = ft_htnwd(str, 0, 0, 2);
	ft_rushdisplay(str, i, holder, 0);
	return (0);
}
