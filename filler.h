/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opanchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 13:57:29 by opanchen          #+#    #+#             */
/*   Updated: 2017/06/22 15:35:30 by opanchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"
# include "get_next_line.h"

void	pr(int a, int b);
int		*pl(char *s);
char	**plateau(char *line, char **plata);
char	**pieces(char *line, char **piece);
int		*solv(char **plata, char **piece, int i);
void	zamena(char **piece, int k);
int		putinto(char **plata, char **piece, int i, int j);
int		*rozme(char **piece);
int		*x_or_y(char **piece, char c);
int		what_clother(char **plata);
void	lol(char *s, char *u, char *p);
int		*kek(char **plata, char **piece, int *b);
int		cocos(int c);
int		*gosha(char **plata, int *a, int k);
int		*average(char **plata, int k);
int		*tochka(int *t);
int		leng(int *w, int a, int b);
int		*kik(int *a, int i, int j);
void	popo(char **plata, int i, char c, int *a);
int		*yito(int *a, int y);
int		*keke(int *a, int i, int j);
int		*kyk(int *a, int i, int j);

#endif
