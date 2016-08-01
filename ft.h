/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 16:44:51 by cshi              #+#    #+#             */
/*   Updated: 2016/07/30 21:59:43 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# define BUF_SIZE 4192592
# define STR_SIZE 2000000

char	*rush00(int x, int y, int i, int j);
char	*rush01(int x, int y, int i, int j);
char	*rush02(int x, int y, int i, int j);
char	*rush03(int x, int y, int i, int j);
char	*rush04(int x, int y, int i, int j);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_htnwd(char *c, int newl, int width, int mode);
int		ft_chksq(char *c, int newl, int width, int space);
int		ft_chkwd(char *c, int i, int wd1, int wd2);
int		ft_chkin(char *c);
void	ft_putnbr(int nb);
int		ft_prtresult(char *c, int wd, int ht, int status);
void	ft_displayresult(char *c, int width, int height, int i);
void	ft_rushdisplay(char *c, int width, int height, int i);
int		ft_iscorner00(int ix, int iy, int x, int y);
char	ft_corner01(int ix, int iy, int x, int y);
char	ft_corner02(int ix, int iy, int x, int y);
char	ft_corner03(int ix, int iy, int x, int y);
char	ft_corner04(int ix, int iy, int x, int y);

#endif
