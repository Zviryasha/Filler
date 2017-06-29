/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 14:08:35 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/27 15:12:33 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	char	*line;
	char	*o;
	char	**plata;
	char	**piece;
	int		*qw;

	while (get_next_line(0, &line) > 0)
	{
		if (ft_strstr(line, "/filler"))
		{
			o = ft_strstr(line, "p");
			o++;
			*o = *o - '0';
		}
		if (ft_strstr(line, "Plateau"))
			plata = plateau(line, plata);
		if (ft_strstr(line, "Piece"))
		{
			piece = pieces(line, piece);
			qw = solv(plata, piece, *o);
			pr(qw[0], qw[1]);
		}
	}
	return (0);
}

int		cocos(int c)
{
	if (c == 1)
		return (1);
	else
		return (0);
}
