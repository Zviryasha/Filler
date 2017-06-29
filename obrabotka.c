/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obrabotka.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 13:44:58 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/17 18:25:46 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**plateau(char *line, char **plata)
{
	int		*a;
	int		i;
	char	*s;
	int		j;

	i = 0;
	a = pl(line);
	get_next_line(0, &s);
	plata = (char **)malloc(sizeof(char *) * (a[0] + 1));
	plata[a[0]] = NULL;
	while (i < a[0])
	{
		j = 0;
		get_next_line(0, &s);
		plata[i] = ft_strnew(ft_strlen(s));
		while (s[j + 4] != '\0')
		{
			plata[i][j] = s[j + 4];
			j++;
		}
		plata[i][j] = '\0';
		i++;
	}
	return (plata);
}

char	**pieces(char *line, char **piece)
{
	int		*a;
	int		i;
	char	*s;
	int		j;

	i = 0;
	a = pl(line);
	piece = (char **)malloc(sizeof(char *) * (a[0] + 1));
	piece[a[0]] = NULL;
	while (i < a[0])
	{
		j = 0;
		get_next_line(0, &s);
		piece[i] = ft_strnew(ft_strlen(s));
		while (s[j] != '\0')
		{
			piece[i][j] = s[j];
			j++;
		}
		piece[i][j] = '\0';
		i++;
	}
	return (piece);
}
