/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:25:31 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/22 15:15:47 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		*solv(char **plata, char **piece, int k)
{
	int *a;
	int	*b;
	int *y;

	zamena(piece, k);
	b = rozme(piece);
	a = kek(plata, piece, b);
	y = gosha(plata, a, k);
	return (y);
}

int		*kek(char **plata, char **piece, int *b)
{
	int			i;
	int			j;
	int			*a;
	int			y;

	y = 0;
	a = (int *)malloc(sizeof(int) * 3000);
	i = -1;
	while (plata[++i + b[0]] != NULL)
	{
		j = -1;
		while (plata[i][++j + b[1]] != '\0')
		{
			if (putinto(plata, piece, i, j) == 1)
			{
				a[y] = i;
				y++;
				a[y] = j;
				y++;
			}
		}
	}
	a = yito(a, y);
	return (a);
}

int		putinto(char **plata, char **piece, int i, int j)
{
	int p;
	int q;
	int coco;
	int y;

	y = j;
	coco = 0;
	p = -1;
	while (piece[++p] != NULL)
	{
		q = -1;
		j = y;
		while (piece[p][++q] != '\0')
		{
			if (piece[p][q] != '.' && piece[p][q] == plata[i][j])
				coco++;
			if (piece[p][q] != '.' && piece[p][q] != plata[i][j]
					&& plata[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (cocos(coco));
}

void	zamena(char **piece, int k)
{
	int		i;
	char	c;
	int		j;

	i = 0;
	if (k == 1)
		c = 'O';
	else
		c = 'X';
	while (piece[i] != NULL)
	{
		j = 0;
		while (piece[i][j] != '\0')
		{
			if (piece[i][j] == '*')
				piece[i][j] = c;
			j++;
		}
		i++;
	}
}

int		*rozme(char **piece)
{
	int *a;
	int i;
	int j;

	a = (int *)malloc(sizeof(int) * 2);
	i = 0;
	while (piece[i] != NULL)
	{
		j = 0;
		while (piece[i][j] != '\0')
			j++;
		i++;
	}
	a[0] = i;
	a[1] = j;
	return (a);
}
