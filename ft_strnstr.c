/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:24:10 by mayyildi          #+#    #+#             */
/*   Updated: 2022/03/31 15:11:29 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!to_find[0])
		return ((char *) str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0' && i + j < len
				&& str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *) str + i);
		}
		i++;
	}
	return (0);
}
