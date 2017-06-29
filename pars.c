/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 12:07:41 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/22 15:15:39 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		*pl(char *s)
{
	int		i;
	int		k;
	char	u[10];
	char	p[10];
	int		*a;

	i = 0;
	k = 0;
	while (!ft_isdigit(*s))
		s++;
	if (ft_isdigit(*s))
		lol(s, u, p);
	a = (int *)malloc(sizeof(int) * 2);
	a[0] = ft_atoi(u);
	a[1] = ft_atoi(p);
	return (a);
}

void	lol(char *s, char *u, char *p)
{
	int i;

	i = 0;
	while (ft_isdigit(*s))
	{
		u[i] = *s;
		s++;
		i++;
	}
	u[i] = '\0';
	s++;
	i = 0;
	while (ft_isdigit(*s))
	{
		p[i] = *s;
		s++;
		i++;
	}
	p[i] = '\0';
}

int		*yito(int *a, int y)
{
	if (y == 0)
		y = 2;
	a[y] = -1;
	y++;
	a[y] = -1;
	y++;
	a[y] = -1;
	return (a);
}
