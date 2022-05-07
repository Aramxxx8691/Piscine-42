/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:39:11 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/09 19:54:48 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	checking(int x, int y, int i, int j)

{
	if ((i == 1 && j == 1) || (i == 1 && j == x))
	{
		ft_putchar('A');
	}
	else if ((i == y && j == 1) || (i == y && j == x))
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == y || j == 1 || j == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x,	int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
	j = 1;
		while (j <= x)
		{
			checking (x, y, i, j);
		j++;
		}
		ft_putchar('\n');
		i++;
	}
}
