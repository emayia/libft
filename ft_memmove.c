/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:55:35 by mayyildi          #+#    #+#             */
/*   Updated: 2022/03/31 15:03:23 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdst;

	pdst = (unsigned char *) dst;
	psrc = (unsigned char *) src;
	if (dst > src)
	{
		while (n > 0)
		{
			pdst[n - 1] = psrc[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(pdst, psrc, n);
	return (pdst);
}
