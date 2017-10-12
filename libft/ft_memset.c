/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:31:42 by magouin           #+#    #+#             */
/*   Updated: 2015/11/24 20:44:00 by magouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	d;
	size_t	x;
	char	*s2;

	s2 = (char*)s;
	x = 0;
	d = (char)c;
	while (x < n)
	{
		s2[x] = d;
		x++;
	}
	return (s);
}
