/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magouin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:12:12 by magouin           #+#    #+#             */
/*   Updated: 2015/11/28 10:55:21 by magouin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int q;

	q = 0;
	if (s == NULL)
		return ;
	while (s[q] != '\0')
	{
		s[q] = '\0';
		q++;
	}
}
