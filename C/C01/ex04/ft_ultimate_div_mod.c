/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:44:41 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/18 17:21:19 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

/*int	main(void)
{
	int i =10;
	int j = 5;
	int *a = &i;
	int *b = &j;

	printf("%d /", i);
	printf(" %d\n", j);

	ft_ultimate_div_mod(a, b);

	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d", *b);
}*/
