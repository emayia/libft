/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:23:02 by mayyildi          #+#    #+#             */
/*   Updated: 2022/03/31 15:02:39 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pstr1;
	unsigned char	*pstr2;

	if (n == 0)
		return (0);
	pstr1 = (unsigned char *) s1;
	pstr2 = (unsigned char *) s2;
	while (*pstr1 == *pstr2 && n > 1)
	{
		pstr1++;
		pstr2++;
		n--;
	}
	return (*pstr1 - *pstr2);
}
