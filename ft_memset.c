/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:31:16 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/03 00:02:02 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_bis;
	size_t			i;

	i = 0;
	s_bis = (unsigned char *) s;
	while (i < n)
	{
		s_bis[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
