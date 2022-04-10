/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:06:01 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/20 21:44:37 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_clear(t_dict **begin_with)
{
	t_dict	*ptr;
	t_dict	*liste;

	liste = *begin_with;
	if (liste)
		while (liste)
		{
			ptr = liste->next;
			free(liste->literal);
			free(liste);
			liste = ptr;
		}
}
