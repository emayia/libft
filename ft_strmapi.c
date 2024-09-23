/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:16:47 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/03 00:02:48 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	sptr = (char *) ft_calloc(ft_strlen(s) + 1, 1);
	if (!sptr)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		sptr[i] = f(i, s[i]);
		i++;
	}
	sptr[i] = 0;
	return (sptr);
}
