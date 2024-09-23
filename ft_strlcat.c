/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:34:50 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/03 00:02:35 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && i + dst_len + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((size == 0) || dst_len > size)
		return (size + src_len);
	else
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
