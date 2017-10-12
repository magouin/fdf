/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:00:52 by magouin           #+#    #+#             */
/*   Updated: 2015/11/25 20:34:46 by magouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int o)
{
	int c;
	int i;

	i = 0;
	c = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == o)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}
