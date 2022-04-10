/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:06:24 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/20 21:51:33 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_list_push_front(t_dict **liste, int n, int suf, char *lit)
{
	t_dict	*push;

	if (liste)
	{
		push = ft_create_elem(n, suf, lit);
		if (push == NULL)
			return (0);
		push->next = *liste;
		*liste = push;
	}
	else
	{
		if ((*liste = ft_create_elem(n, suf, lit)) == NULL)
			return (0);
	}
	return (1);
}
