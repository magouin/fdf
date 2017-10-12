/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:51:45 by magouin           #+#    #+#             */
/*   Updated: 2015/11/28 23:41:33 by magouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] - s2[c] != 0)
			return ((int)((unsigned char)s1[c] - (unsigned char)s2[c]));
		c++;
	}
	if (s2[c] != '\0')
		return ((int)((unsigned char)s1[c] - (unsigned char)s2[c]));
	if (s1[c] != '\0')
		return ((int)((unsigned char)s1[c] - (unsigned char)s2[c]));
	return (0);
}
