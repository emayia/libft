/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayyildi <mayyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:41:45 by mayyildi          #+#    #+#             */
/*   Updated: 2022/04/02 16:41:58 by mayyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (new)
	{
		if (!(*alst))
			*alst = new;
		else
		{
			begin = *alst;
			while (begin->next)
				begin = begin->next;
			begin->next = new;
		}
	}
}
