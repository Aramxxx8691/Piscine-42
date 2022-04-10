/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:43:03 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/18 17:14:58 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 7;
	int	b = 2;
	int	*div = &a;
	int	*mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("a = %d\n", *div);
	printf("b = %d\n", *mod);
}*/
