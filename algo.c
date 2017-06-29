/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 16:06:06 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/22 15:33:38 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		*gosha(char **plata, int *a, int k)
{
	int *t;
	int *r;
	int i;
	int l[2];
	int *p;

	p = (int *)malloc(sizeof(int) * 2);
	i = 0;
	t = average(plata, k);
	r = tochka(t);
	l[0] = leng(r, a[0], a[1]);
	p[0] = a[0];
	p[1] = a[1];
	while (a[i] != -1)
	{
		l[1] = leng(r, a[i], a[i + 1]);
		if (l[1] < l[0])
		{
			l[0] = l[1];
			p[0] = a[i];
			p[1] = a[i + 1];
		}
		i = i + 2;
	}
	return (p);
}

int		leng(int *r, int a, int b)
{
	int i;

	i = (r[0] - a) * (r[0] - a) + (r[1] - b) * (r[1] - b);
	return (i);
}

int		*average(char **plata, int k)
{
	int i;
	int *a;
	int c;
	int cou;

	cou = 0;
	if (k == 1)
		c = 'X';
	else
		c = 'O';
	i = 0;
	a = (int *)malloc(sizeof(int) * 8);
	a[5] = 500;
	a[7] = 0;
	popo(plata, i, c, a);
	return (a);
}

void	popo(char **plata, int i, char c, int *a)
{
	int			j;
	int			cou;

	cou = 0;
	while (plata[i] != NULL)
	{
		j = -1;
		while (plata[i][++j] != '\0')
		{
			if (plata[i][j] == c && cou == 0)
			{
				a[0] = i;
				a[1] = j;
				cou++;
			}
			if (plata[i][j] == c)
				a = kik(a, i, j);
			if (plata[i][j] == c && j < a[5])
				a = keke(a, i, j);
			if (plata[i][j] == c && j > a[7])
				a = kyk(a, i, j);
		}
		i++;
	}
}

int		*tochka(int *t)
{
	int *e;

	e = (int *)malloc(sizeof(int) * 2);
	if (t[0] == t[2] && t[1] == t[3])
	{
		e[0] = t[0];
		e[1] = t[1];
		return (e);
	}
	else
	{
		e[0] = (t[2] + t[0] + t[4] + t[6]) / 4;
		e[1] = (t[3] + t[1] + t[5] + t[7]) / 4;
		if (e[0] < 0)
			e[0] = -e[0];
		if (e[1] < 0)
			e[1] = -e[1];
		return (e);
	}
}
