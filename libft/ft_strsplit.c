/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:21:05 by magouin           #+#    #+#             */
/*   Updated: 2015/11/28 11:19:43 by magouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	creationdutab(char const *s, char c, int *dim)
{
	int n;
	int compte;

	n = 0;
	dim[1] = 0;
	dim[0] = 0;
	if (s[n] != c)
		dim[0]++;
	while (s[n] != '\0')
	{
		compte = 0;
		while (s[n] != c && s[n] != '\0')
		{
			compte++;
			if (compte > dim[1])
				dim[1] = compte;
			if (s[n - 1] == c)
				dim[0]++;
			n++;
		}
		while (s[n] == c)
			n++;
	}
}

void	final(char const *s, char c, char **str)
{
	int n;
	int x;
	int y;

	x = 0;
	y = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] != c)
		{
			while (s[n] != c && s[n] != '\0')
			{
				str[y][x] = s[n];
				n++;
				x++;
			}
			str[y][x] = '\0';
			x = 0;
			y++;
		}
		else
			n++;
	}
	str[y] = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	int		*dim;
	char	**str;
	int		mots;

	if (s == NULL)
		return (NULL);
	dim = malloc(sizeof(int) * 2);
	creationdutab(s, c, dim);
	mots = 0;
	str = (char**)malloc(sizeof(char*) * (dim[0] + 1));
	if (str == NULL)
		return (NULL);
	while (mots < dim[0])
	{
		str[mots] = (char*)malloc(sizeof(char) * (dim[1] + 1));
		if (str[mots] == NULL)
			return (NULL);
		mots++;
	}
	final(s, c, str);
	return (str);
}
